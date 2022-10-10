// https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto& command : commands){
        vector<int> v = array;
        
        stable_sort(v.begin() + command[0] - 1, v.begin() + command[1]);
        answer.push_back(v[command[2] + command[0] - 2]);
    }
    return answer;
}
