#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    // 'A' ~ 'Z'에 대해 최소 누른 횟수를 저장할 배열 (문자가 없으면 0)
    map<char, int> keypad;
    for (char c = 'A'; c <= 'Z'; c++) {
        keypad[c] = 0;
    }
    
    // 각 keymap의 문자열을 순회하면서, 각 문자에 대해 최소 누른 횟수를 갱신
    for (int i = 0; i < keymap.size(); i++) {
        for (int j = 0; j < keymap[i].length(); j++) {
            // 아직 할당되지 않았거나, 더 적은 횟수로 누를 수 있다면 업데이트
            if (keypad[keymap[i][j]] == 0 || keypad[keymap[i][j]] > j + 1)
                keypad[keymap[i][j]] = j + 1;
        }
    }
    
    // 각 타겟 문자열을 순회하며 결과 계산
    for (int i = 0; i < targets.size(); i++) {
        int number = 0;
        for (int j = 0; j < targets[i].length(); j++) {
            // keymap에 해당 문자가 존재하지 않는 경우 (최소 누른 횟수가 0인 경우)
            if (keypad[targets[i][j]] == 0) {
                number = -1;
                break;
            }
            else {
                number += keypad[targets[i][j]];
            }
        }
        answer.push_back(number);
    }
    
    return answer;
}