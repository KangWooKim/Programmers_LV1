#include <bits/stdc++.h>
using namespace std;
int solution(int n, int w, int num) {
    // 1) 타겟 박스의 행, 열 계산
    int targetRow = (num - 1) / w;
    int offset    = (num - 1) % w;
    int col = (targetRow % 2 == 0) ? offset : (w - 1 - offset);
    // 2) 전체 마지막 행
    int lastRow = (n - 1) / w;
    // 3) 꺼내야 할 상자 수: 자기 자신 포함
    int answer = 1;
    // 4) 위쪽 모든 층 순회
    for (int r = targetRow + 1; r <= lastRow; ++r) {
        // 해당 층의 실제 박스 개수
        int rowCount = (r == lastRow ? (n - r * w) : w);
        if (rowCount == w) {
            // 완전한 층이면 같은 열에 반드시 상자 존재
            answer++;
        } else {
            // 불완전 층: 배치 방향에 따라 열 범위 판단
            if (r % 2 == 0) {
                if (col < rowCount) answer++;
            } else {
                if (col >= w - rowCount) answer++;
            }
        }
    }
    return answer;
}
// 예시 테스트
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // 예제 1
    cout << solution(22, 6, 8) << "\n";   // 기대: 3
    // 예제 2
    cout << solution(13, 3, 6) << "\n";   // 기대: 4
    return 0;
}