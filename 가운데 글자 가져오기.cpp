#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int a = s.length() % 2;
    if(a == 1) return s.substr(s.length() / 2 , 1);
    else if(a == 0) return s.substr(s.length() / 2 - 1, 2);
}
