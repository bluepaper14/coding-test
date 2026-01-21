#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    while(1) {
        answer.push_back(start_num);
        start_num++;
        if(start_num > end_num)
            break;
    }
    return answer;
}