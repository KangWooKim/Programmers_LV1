// https://school.programmers.co.kr/learn/courses/30/lessons/12906#

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    for(int i = 0 ; i < arr.size() ; i++){
        if(answer.back() != arr[i]) answer.push_back(arr[i]);
    }
    return answer;
}
