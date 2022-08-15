// https://school.programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() != 4 && s.length() != 6) return false;
    for(auto& c : s){
        if(c < 48 || c > 57) return false;
    }
    return answer;
}
