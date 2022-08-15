// https://school.programmers.co.kr/learn/courses/30/lessons/12926

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(auto& c : s){
        if(isspace(c)){ answer.push_back(' '); continue;}
        if(isupper(c)){
            c += n;
            if(c > 90) c -= 26;
            answer.push_back(c);
        }
        else if(islower(c)){
            int x = c + n;
            if(x > 122) x -= 26;
            answer.push_back(char(x));
        }
    }
    return answer;
}
