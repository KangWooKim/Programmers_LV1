// https://school.programmers.co.kr/learn/courses/30/lessons/17682

#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> score(3, 0);
    vector<string> val(3, "");
    int idx = 0;
    
    for(int i = 0 ; i < dartResult.length() ; i++){
        val[idx] += dartResult[i];
        if(i + 1 < dartResult.length() && !isdigit(dartResult[i]) && isdigit(dartResult[i + 1])) idx++;
    }
    
    vector<char> sdt = {'S', 'D', 'T'};
    
    for(int i = 0 ; i < val.size() ; i++){
        string number = isdigit(val[i][1]) ? val[i].substr(0, 2) : val[i].substr(0, 1);
        int n = stoi(number); int sd = find(sdt.begin(), sdt.end(), val[i][number.length()]) - sdt.begin() + 1;
        int k = 1;
        if(val[i].length() > number.length() + 1) {k = (val[i][number.length() + 1] == '#') ? -1 : 2;}
        score[i] = pow(n, sd) * k;
        if(i > 0 && k != -1) score[i - 1] *= k;
    }
    answer = accumulate(score.begin(), score.end(), 0);
    stringstream ss(dartResult);
    int score1;
    score1 = ss.get();
    cout << score1;
    return answer;
}
