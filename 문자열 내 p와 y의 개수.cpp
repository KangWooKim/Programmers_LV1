// https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    int res = 0;
    for(auto& c : s){
        if(c == 'p' || c == 'P') res++;
        else if(c == 'y' || c == 'Y') res--;
    }

    return res == 0 ? true : false;
}
