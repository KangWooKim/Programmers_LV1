// https://school.programmers.co.kr/learn/courses/30/lessons/12954

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer; long long i = 1;
    while(answer.size() != n){
        answer.push_back((long long)x * i);
        i++;
    }
    return answer;
}
