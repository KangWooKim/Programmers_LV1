// https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int len = nums.size() / 2;
    unordered_set<int> st;
    for(auto& n : nums)
        st.insert(n);
    answer = st.size();
    if(answer > len) answer = len;
    return answer;
}
