#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    vector<int> a(d);
    int money = 0;
    sort(a.begin(), a.end());
    if(budget < a[0]) return 0;
    for(int i = 0 ; i < a.size() ; i++){
        if(money + a[i] > budget){
            return i;
        }
        money += a[i];
        
    }
    return a.size();
}
