// https://programmers.co.kr/learn/courses/30/lessons/17681

#include <bits/stdc++.h>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    vector<string> code1(n), code2(n);
    
    for(int i = 0 ; i < n ; i++){
        for(int j = n - 1 ; j >= 0 ; j--){
            int a = pow(2, j);
            code1[i] += to_string(arr1[i] / a); code2[i] += to_string(arr2[i] / a);
            arr1[i] %= a; arr2[i] %= a;
        }
    }
    
    for(int i = 0 ; i < code1.size() ; i++){
        for(int j = 0 ; j < n ; j++){
            if(code1[i][j] == '0' && code2[i][j] == '0'){
                answer[i].push_back(' ');
                continue;
            }
            else if(code1[i][j] == '1' || code2[i][j] == '1'){
                answer[i].push_back('#');
                continue;
            }
        }
    }
    
    return answer;
}
