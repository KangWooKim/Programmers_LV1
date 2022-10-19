// https://school.programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    string s1 = "12345";
    string s2 = "21232425";
    string s3 = "3311224455";
    while(s1.length() < answers.size())
        s1 += "12345";
    while(s2.length() < answers.size())
        s2 += "21232425";
    while(s3.length() < answers.size())
        s3 += "3311224455";
    vector<int> score(3, 0);
    for(int i = 0 ; i < answers.size() ; i++){
        if(s1.at(i) - '0' == answers[i]) score[0]++;
        if(s2.at(i) - '0' == answers[i]) score[1]++;
        if(s3.at(i) - '0' == answers[i]) score[2]++;
    }
    int m = *max_element(score.begin(), score.end());
    for(int i = 0 ; i < score.size() ; i++){
        if(m == score[i]) answer.push_back(i + 1);
    }
    return answer;
}
