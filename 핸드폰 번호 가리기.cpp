// https://school.programmers.co.kr/learn/courses/30/lessons/12948

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    answer.append(phone_number.length() - 4 , '*');
    answer.append(phone_number.substr(phone_number.length() - 4, 4));
    return answer;
}
