// https://school.programmers.co.kr/learn/courses/30/lessons/135808

#include <bits/stdc++.h>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    stable_sort(score.begin(), score.end());
    while(score.size() >= m){
        int min = k + 1;
        for(int i = 0 ; i < m ; i++){
            min > score.back() ? min = score.back() : min = min;
            score.pop_back();
        }
        answer += min * m;
    }
    
    return answer;
}
