// https://school.programmers.co.kr/learn/courses/30/lessons/131128

#include <bits/stdc++.h>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    map<string, int> mx;
    map<string, int> my;
    for(int i = 0 ; i < X.length() ; i++){
        mx[X.substr(i, 1)]++;
    }
    for(int i = 0 ; i < Y.length() ; i++){
        my[Y.substr(i, 1)]++;
    }
    vector<string> v;
    for(int i = 0 ; i <= 9 ; i++){
        if(mx[to_string(i)] != 0 && my[to_string(i)] != 0){
            int cnt = min(mx[to_string(i)], my[to_string(i)]);
            while(cnt--) v.push_back(to_string(i));
        }
    }
    if(v.empty()) return "-1";
    if(v.back() == "0") return "0";
    while(!v.empty()){
        answer += v.back();
        v.pop_back();
    }
    
    return answer;
}
