#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int temp = k;
    while(1) {
        if(n < temp) {
            break;
        }
        answer.push_back(temp);
        temp += k;
    }
    return answer;
}