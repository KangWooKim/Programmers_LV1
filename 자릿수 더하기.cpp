//https://school.programmers.co.kr/learn/courses/30/lessons/12931

#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string s1 = to_string(n);
    for(auto c : s1){
        answer += c - '0';
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
