//https://school.programmers.co.kr/learn/courses/30/lessons/1845

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> v = nums;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    if(v.size() <= nums.size() / 2){
        return v.size();
    }
    else if(v.size() > nums.size() / 2){
        return nums.size() / 2;
    }
    return answer;
}
