//https://programmers.co.kr/learn/courses/30/lessons/81301

#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");    
    return stoi(s);
}



/*
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    string answer = "";
    string word = "";
    
    
    for(int i = 0 ; i < s.size() ; i++){
        string a = s.substr(i, 1);
        if(a == "1" || a == "2" || a == "3" || a == "4" || a == "5" || a == "6" || a == "7" || a == "8" || a == "9" || a == "0"){
            answer += a;
            continue;
        }
        
        word += a;
        
        if(word == "zero"){
            word = "";
            answer += "0";
        }
        else if(word == "one"){
            word = "";
            answer += "1";
        }
        else if(word == "two"){
            word = "";
            answer += "2";
        }
        else if(word == "three"){
            word = "";
            answer += "3";
        }
        else if(word == "four"){
            word = "";
            answer += "4";
        }
        else if(word == "five"){
            word = "";
            answer += "5";
        }
        else if(word == "six"){
            word = "";
            answer += "6";
        }
        else if(word == "seven"){
            word = "";
            answer += "7";
        }
        else if(word == "eight"){
            word = "";
            answer += "8";
        }
        else if(word == "nine"){
            word = "";
            answer += "9";
        }
    }
    int k = stoi(answer);
    return k;
}
*/
