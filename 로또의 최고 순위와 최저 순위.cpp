//https://programmers.co.kr/learn/courses/30/lessons/77484#

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int zero = 0;
    for(int i = 0 ; i < lottos.size() ; i++){
        if(lottos[i] == 0) zero++;
    }
    for(int i = 0 ; i < win_nums.size() ; i++){
        for(int j = 0 ; j < lottos.size() ; j++){
            if(lottos[j] == win_nums[i]){
                correct++;
            }
        }
    }
    if(zero == 0 && correct == 0) answer.push_back(6);
    else answer.push_back(7 - zero - correct);
    if(correct > 0) answer.push_back(7 - correct);
    else if(correct == 0) answer.push_back(6);
    return answer;
}
