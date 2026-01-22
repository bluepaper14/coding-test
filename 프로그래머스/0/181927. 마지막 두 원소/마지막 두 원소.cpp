#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int x = answer.size(); //배열의 크기
    if(answer[x-1] > answer[x-2]) {
        answer.push_back(answer[x - 1] - answer[x - 2]);
    }
    else {
        answer.push_back(answer[x - 1] * 2);
    }
    
    return answer;
}