//https://school.programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    
    vector<int> answer;
    
    for(int i=0;i<commands.size();i++){
        int a=commands[i][0];
        int b=commands[i][1];
        int c=commands[i][2];
        vector<int> newArray;
        for(int j=a-1;j<b;j++){
            newArray.push_back(array[j]);
        }
        sort(newArray.begin(),newArray.end());
        answer.push_back(newArray[c-1]);
    }
    return answer;
}
