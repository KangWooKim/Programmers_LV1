// https://programmers.co.kr/learn/courses/30/lessons/77884

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool is_odd(int number){
    int k = sqrt(number);
    if(k * k == number) return true;
    return false;
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left ; i < right + 1 ; i++){
        if(is_odd(i)) answer -= i;
        else answer += i;
    }
    
    return answer;
}
