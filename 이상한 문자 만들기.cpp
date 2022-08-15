// https://school.programmers.co.kr/learn/courses/30/lessons/12930

#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(isspace(s[i])){idx = 0; answer += ' '; continue;}
        else if(isalpha(s[i])){
            if(idx % 2 == 0){idx++; answer += toupper(s[i]);}
            else{idx++; answer += tolower(s[i]);}
        }
    }
    return answer;
}
