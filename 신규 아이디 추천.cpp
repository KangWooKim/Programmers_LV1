// #include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    string answer = new_id;
    
    
    for(int i = 0 ; i < answer.size() ; i++){
        answer[i] = tolower(answer[i]);
    }
    for(int i = 0 ; i < answer.size() ; i++){
        int a = (int)answer[i];
        if(a != 95 && a != 45 && a != 46 && (a < 48 || a > 57) && (a < 97 || a > 122)){
            answer.erase(i, 1);
            i--;
        }
    }
   
    
    for(int i = 1 ; i < answer.size() ; i++){
        char c1 = answer[i - 1];
        char c2 = answer[i];
        if(c1 == '.' && c2 == '.'){
            answer.erase(i - 1, 1);
            i--;
        }
    }
    
    if(answer.size() != 0 && answer.front() == '.') answer.erase(0, 1);
    if(answer.size() != 0 && answer.back() == '.') answer.pop_back();
    if(answer.empty()) answer.push_back('a');
    if(answer.size() > 15) answer.erase(15, answer.size() - 15);
    if(answer.size() != 0 && answer[answer.size() - 1] == '.') answer.erase(answer.size() - 1, 1);
    if(answer.size() < 3){
        while(true){
            if(answer.size() > 2) break;
            char c = answer[answer.size() - 1];
            answer.push_back(c);
        }
    }
    
    return answer;
}

/*
#include <bits/stdc++.h>
using namespace std;

string solution(string new_id) {
    for (char& ch : new_id) if ('A' <= ch && ch <= 'Z') ch |= 32;

    string ret;
    for (char& ch: new_id) {
        if ('a' <= ch && ch <= 'z' ||
            '0' <= ch && ch <= '9' ||
            strchr("-_.", ch)) ret += ch;
    }

    new_id = ret;
    ret.clear();
    for (char& ch: new_id) {
        if (!ret.empty() && ret.back() == '.' && ch == '.') continue;
        ret += ch;
    }

    if (ret.front() == '.') ret.erase(ret.begin());
    if (ret.back() == '.') ret.pop_back();

    if (ret.empty()) ret = "a";
    if (ret.size() >= 16) ret = ret.substr(0, 15);
    if (ret.back() == '.') ret.pop_back();
    while (ret.size() <= 2) ret += ret.back();

    return ret;
}

*/
