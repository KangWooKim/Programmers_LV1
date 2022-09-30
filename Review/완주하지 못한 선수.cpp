// https://school.programmers.co.kr/learn/courses/30/lessons/42576

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> mp;
    for(auto& p : participant)
        mp[p]++;
    for(auto& c : completion)
        mp[c]--;
    auto iter = mp.begin();
    while(iter != mp.end()){
        if(iter->second == 1) return iter->first;
        ++iter;
    }
    return answer;
}
