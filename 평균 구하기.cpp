// https://school.programmers.co.kr/learn/courses/30/lessons/12944

#include <bits/stdc++.h>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    answer = (double)sum / (double)arr.size();
    return answer;
}
