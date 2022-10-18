//https://school.programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> w, h;
    for(auto& s : sizes){
        w.push_back(max(s[0], s[1]));
        h.push_back(min(s[0], s[1]));
    }
    answer = (*max_element(w.begin(), w.end())) * (*max_element(h.begin(), h.end()));
    return answer;
}
