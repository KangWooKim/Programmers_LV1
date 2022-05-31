//https://programmers.co.kr/learn/courses/30/lessons/68935

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = n; int b = 0; int c = 1;
    string number = "";
    while(true){
        b  = a % 3;
        a = a / 3;
        number += to_string(b);
        if(a == 0)
            break;
    }
    
    for(int i = 0 ; i < number.size() ; i++){
        string a = number.substr(i, 1);
        int k = stoi(a);
        answer += k * pow(3, number.size() - i - 1);
    }
    return answer;
}

/*
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    while(n > 0){
        v.push_back(n%3);
        n/=3;
    }
    int k = 1;
    while(!v.empty()) {
        answer += k*v.back();
        v.pop_back();
        k*=3;
    }

    return answer;
}

*/
