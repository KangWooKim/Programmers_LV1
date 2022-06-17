// https://programmers.co.kr/learn/courses/30/lessons/42889

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    else
        return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer(N, 0);
    vector<pair<double,int>> fail;
    
    for(int i = 0 ; i < N ; i++){
        int a = 0; int b = 0;
        for(int j = 0 ; j < stages.size() ; j++){
            
            if(stages[j] >= i + 1)
                b++;
            if(stages[j] == i + 1)
                a++;
            
        }
        if(b == 0) fail.push_back(make_pair(0, i + 1));
        else fail.push_back(make_pair((double)a / (double)b, i + 1));
        
    }
    sort(fail.begin(), fail.end(), cmp);
    for(int i = 0 ; i < answer.size() ; i++){
        
        answer[i] = fail[i].second;
    }                           
                        
    
    return answer;
}
