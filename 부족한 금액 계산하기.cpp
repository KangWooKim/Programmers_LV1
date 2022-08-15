// https://school.programmers.co.kr/learn/courses/30/lessons/82612

#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count)
{
    long long res = 0;
    for(int i = 1 ; i < count + 1 ; i++) res = res + price * i;
    if(money >= res) return 0;
    else return res - (long long)money;
}
