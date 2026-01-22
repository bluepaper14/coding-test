#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 1; i < numLog.size(); i++) {
        if(numLog[i] - numLog[i - 1] == 1)
            answer += 'w';
        if(numLog[i] - numLog[i - 1] == -1)
            answer += 's';
        if(numLog[i] - numLog[i - 1] == 10)
            answer += 'd';
        if(numLog[i] - numLog[i - 1] == -10)
            answer += 'a';
    }

    return answer;
}
//앞뒤 배열의 숫자의 변화를 보고 얼만큼 더하고  뺏는지 확인하면됨.
//그러면 이전 이후의 변화가능한 방법은 4가지이니 말이다.