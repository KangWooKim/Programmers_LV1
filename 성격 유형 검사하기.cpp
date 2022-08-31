// https://school.programmers.co.kr/learn/courses/30/lessons/118666

#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> mp;
    vector<char> mbti = {'R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'};
    
    for(auto c : mbti)
        mp[c] = 0;
    
    
    for(int i = 0 ; i < survey.size() ; i++){
        if(choices[i] < 4) mp[survey[i][0]] += (4 - choices[i]);
        else if(choices[i] > 4) mp[survey[i][1]] += (choices[i] % 4);
        else if(choices[i] == 4) continue;
    }
    
    for(int i = 0 ; i < mbti.size() ; i += 2){
        if(mp[mbti[i]] >= mp[mbti[i + 1]]) answer += mbti[i];
        else answer += mbti[i + 1];
    }
    
    return answer;
}
