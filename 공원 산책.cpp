// https://school.programmers.co.kr/learn/courses/30/lessons/172928

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int now_x = -1; int now_y;
    for(int i = 0 ; i < park.size() ; i++){
        for(int j = 0 ; j <park[i].length() ; j++){
            if(park[i][j] == 'S'){
                now_x = j;
                now_y = i;
                break;
            }
        }
        if(now_x != -1) break;
    }
    for(auto& route : routes){
        char direc = route.at(0);
        int dist = stoi(route.substr(2, 1));
        if(direc == 'N'){
            if(now_y - dist < 0) continue;
            bool IsOk = true;
            for(int d = 1 ; d <= dist ; d++){
                if(park[now_y - d][now_x] == 'X'){
                    IsOk = false;
                    break;
                }
            }
            if(IsOk) now_y = now_y - dist;
        }
        else if(direc == 'S'){
            if(now_y + dist >= park.size()) continue;
            bool IsOk = true;
            for(int d = 1 ; d <= dist ; d++){
                if(park[now_y + d][now_x] == 'X'){
                    IsOk = false;
                    break;
                }
            }
            if(IsOk) now_y = now_y + dist;
        }
        else if(direc == 'W'){
            if(now_x - dist < 0) continue;
            bool IsOk = true;
            for(int d = 1 ; d <= dist ; d++){
                if(park[now_y][now_x - d] == 'X'){
                    IsOk = false;
                    break;
                }
            }
            if(IsOk) now_x = now_x - dist;
        }
        else if(direc == 'E'){
            if(now_x + dist >= park[0].length()) continue;
            bool IsOk = true;
            for(int d = 1 ; d <= dist ; d++){
                if(park[now_y][now_x + d] == 'X'){
                    IsOk = false;
                    break;
                }
            }
            if(IsOk) now_x = now_x + dist;
        }
        
    }
    answer.push_back(now_y); answer.push_back(now_x);
    return answer;
}
