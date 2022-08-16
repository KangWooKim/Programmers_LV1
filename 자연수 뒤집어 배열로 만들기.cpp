// https://school.programmers.co.kr/learn/courses/30/lessons/12932

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s1 = to_string(n);
    while(s1 != ""){
        answer.push_back(stoi(s1.substr(s1.size() - 1, 1)));
        s1.pop_back();
    }
    return answer;
}
