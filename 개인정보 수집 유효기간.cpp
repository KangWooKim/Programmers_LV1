// https://school.programmers.co.kr/learn/courses/30/lessons/150370

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> mp;
    for(auto& term : terms){
        mp[term[0]] = stoi(term.substr(2, term.length() - 2)) *28;
    }
    int Today = stoi(today.substr(0, 4)) * 28 * 12 + stoi(today.substr(5, 2)) * 28 + stoi(today.substr(8, 2));
    for(int i = 0 ; i < privacies.size() ; i++){
        int due  = stoi(privacies[i].substr(0, 4)) * 28 * 12 + stoi(privacies[i].substr(5, 2)) * 28 + stoi(privacies[i].substr(8, 2));
        int m = mp[privacies[i].at(11)];
        if(due + m < Today + 1) answer.push_back(i + 1);
    }
    return answer;
}
