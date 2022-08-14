// https://school.programmers.co.kr/learn/courses/30/lessons/12940

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = min(m, n); int y = max(m, n);
    for(int i = x ; i > 0 ; i--){
        if(x % i == 0 && y % i == 0){answer.push_back(i); break;}
    }
    answer.push_back(x * y / answer[0]);
    return answer;
}
