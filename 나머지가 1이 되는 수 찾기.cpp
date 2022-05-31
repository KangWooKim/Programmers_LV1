//https://programmers.co.kr/learn/courses/30/lessons/87389

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    
    for(int i = 2 ; i <= sqrt(n-1) ; i++){
        if((n-1) % i == 0){
            return i;
        }
    }
    
    return n-1;
    
}
