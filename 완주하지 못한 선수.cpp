// https://school.programmers.co.kr/learn/courses/30/lessons/42576

#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> m;
    for(auto a : participant){
        m[a]++;
    }
    for(auto a : completion){
        m[a]--;
    }
    for(auto iter : m){
        if(iter.second != 0)
            answer = iter.first;
    }
    
    return answer;
}
