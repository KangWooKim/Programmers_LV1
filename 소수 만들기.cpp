//https://programmers.co.kr/learn/courses/30/lessons/12977

#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool judge(int a){
    for(int i = 2 ; i <= sqrt(a) ; i++){
        if(a % i == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for(int a = 0 ; a < nums.size() - 2 ; a++){
        for(int b = a + 1; b < nums.size() - 1 ; b++){
            for(int c = b + 1 ; c < nums.size() ; c++){
                if(judge(nums[a] + nums[b] + nums[c]))
                    answer++;
            }
        }
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
