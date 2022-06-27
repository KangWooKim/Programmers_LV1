#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() == 1) return {-1};
    vector<int> answer(arr);
    int min = 0;
    for(int i = 1 ; i < answer.size() ; i++){
        if(answer[min] > answer[i]) min = i;
    }
    answer.erase(answer.begin() + min);
    return answer;
}

/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;

    int min = *min_element(arr.begin(), arr.end());
    int index = find(answer.begin(), answer.end(), min) - answer.begin();
    answer.erase(answer.begin() + index);

    return answer.empty() ? vector<int>(1, -1) : answer;
}
*/
