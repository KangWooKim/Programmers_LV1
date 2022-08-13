// https://school.programmers.co.kr/learn/courses/30/lessons/12921

#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    vector<bool> v(n + 1, true);
    v[1] = false; v[0] = false;
    int answer = 0;
    
    for(int i = 2 ; i < v.size() ; i++){
        if(v[i] == true){
            for(int j = i * 2 ; j < v.size() ; j += i){
                v[j] = false;
            }
        }
    }
    for(int i = 2 ; i < v.size() ; i++){
        if(v[i] == true) ++answer;
    }
    return answer;
}
