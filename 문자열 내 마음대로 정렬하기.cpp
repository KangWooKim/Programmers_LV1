// https://school.programmers.co.kr/learn/courses/30/lessons/12915

#include <bits/stdc++.h>

int x;

using namespace std;

bool compare(string s1, string s2){
    if(s1[x] == s2[x]) return s1 < s2;
    return s1[x] < s2[x];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    x = n;
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}
