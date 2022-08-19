// https://school.programmers.co.kr/learn/courses/30/lessons/42840

#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int questions = answers.size();
    string student1,student2,student3;
    vector<int> score;
    for(int i=0;i<3;i++)
        score.push_back(0);
   
    string p="12345";
    string q="21232425";
    string r="3311224455";
    for(int i=0;i<(questions/p.length())+1;i++){
        student1+=p;
    }
    for(int i=0;i<(questions/q.length())+1;i++){
        student2+=q;
    }
    for(int i=0;i<(questions/r.length())+1;i++){
        student3+=r;
    }
    for(int i=0;i<questions;i++){
        if(answers[i]==student1.at(i)-'0'){
            score[0]++;
        }
        if(answers[i]==student2.at(i)-'0'){
            score[1]++;
        }
        if(answers[i]==student3.at(i)-'0'){
            score[2]++;
        }
    }
    int max= *max_element(score.begin(),score.end());
    for(int i=0;i<score.size();i++){
        if(score[i]==max){
            answer.push_back(i+1);
        }
    }
    return answer;
}
