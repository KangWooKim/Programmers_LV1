// https://school.programmers.co.kr/learn/courses/30/lessons/64061

#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<vector<int>> doll(board.size());
    
    for(int i = board.size() - 1 ; i > -1 ; i--){
        for(int j = 0 ; j < board.size() ; j++){
            if(board[i][j] == 0) continue;
            doll[j].push_back(board[i][j]);
        }
    }
    
    vector<int> list;
    
    for(auto i : moves){
        if(doll[i - 1].empty()) continue;
        int d = doll[i - 1].back();
        doll[i - 1].pop_back();
        if(!list.empty() && list.back() == d) {list.pop_back(); answer += 2; continue;}
        list.push_back(d);
    }
    
    return answer;
}
