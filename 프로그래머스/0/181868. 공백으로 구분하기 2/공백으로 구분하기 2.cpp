#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "";

    for (char c : my_string) {
        if (c == ' ') {
            // 공백을 만났는데, 그동안 모아둔 글자(단어)가 있다면 추가
            if (!temp.empty()) {
                answer.push_back(temp);
                temp = ""; // 다음 단어를 위해 초기화
            }
        } 
        else {
            temp += c;
        }
    }

    // 반복문이 끝난 후, 마지막에 남아있던 단어가 있다면 추가 (중요!)
    if (!temp.empty()) {
        answer.push_back(temp);
    }

    return answer;
}