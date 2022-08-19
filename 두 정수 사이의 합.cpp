//https://school.programmers.co.kr/learn/courses/30/lessons/12912

#include <bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a == b) return a;
    long long m = max(a, b); long long n = min(a, b);
    answer = (n + m) * (m - n + 1) / 2;
    return answer;
}
