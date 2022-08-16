// https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s1 = to_string(n);
    sort(s1.begin(), s1.end(), greater<char>());
    answer = stoll(s1);
    return answer;
}
