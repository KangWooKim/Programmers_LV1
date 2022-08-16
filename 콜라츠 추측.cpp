// https://school.programmers.co.kr/learn/courses/30/lessons/12943?language=cpp

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int cnt = 0; long long n = num;
    if(num == 1) return 0;
    while(cnt < 500 && n != 1){
        ++cnt;
        if(n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    return n == 1 ? cnt : -1;
}
