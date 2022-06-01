// https://programmers.co.kr/learn/courses/30/lessons/12901

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    
    int day = 0;
    vector<int> days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0 ; i < a - 1 ; i++){
        day += days[i];
    }
    int k = (day + b -1) % 7;
    vector<string> result = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    return result[k];
}
