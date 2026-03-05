#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] == ' ') {
            if (!temp.empty()) {
                answer.push_back(temp);
                temp = ""; // 다음 단어를 위해 비워줌
            }
        } else {
            temp += my_string[i];
        }
    }
    if (!temp.empty()) answer.push_back(temp);

    return answer;
}

/*
1.my_string을 순회
2.만약 ""공백이라면 i를 저장하고 이중 for문으로 temp로 먼저 
*/