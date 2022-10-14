// https://school.programmers.co.kr/learn/courses/30/lessons/131705

#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<bool> v(number.size() - 3, false);
    v.push_back(true);
    v.push_back(true);
    v.push_back(true);
    do{
        int res = 0;
        for(int i = 0 ; i < v.size() ; i++)
            if(v[i]) res += number[i];
        if(res == 0) ++answer;
    }while(next_permutation(v.begin(), v.end()));
    return answer;
}
