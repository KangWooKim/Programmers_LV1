//https://programmers.co.kr/learn/courses/30/lessons/67256

#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10; int right = 12;
    for(int i = 0 ; i < numbers.size() ; i++){
        int now = numbers[i];
        if(now == 0) now =11;
        if(now == 1 || now == 4 || now == 7){
            answer += "L";
            left = now;
            continue;
        }
        else if(now == 3 || now == 6 || now == 9){
            answer += "R";
            right = now;
            continue;
        }
        int Left_distance = abs(now - left) / 3 + abs(now - left) % 3;
        int Right_distance = abs(now - right) / 3 + abs(now - right) % 3;
        if(Left_distance == Right_distance){
            if(hand.compare("right") == 0){
                answer += "R";
                right = now;
                continue;
            }
            else if(hand.compare("left") == 0){
                answer += "L";
                left = now;
                continue;
            }
        }
        else if(Left_distance < Right_distance){
            answer +="L";
            left = now;
            continue;
        }
        else if (Left_distance > Right_distance){
            answer +="R";
            right = now;
            continue;
        }
    }
    return answer;
}
