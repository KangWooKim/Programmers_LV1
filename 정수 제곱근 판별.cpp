// https://school.programmers.co.kr/learn/courses/30/lessons/12934

#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n);
    return answer * answer == n ? (answer + 1) * (answer + 1) : -1;
}
