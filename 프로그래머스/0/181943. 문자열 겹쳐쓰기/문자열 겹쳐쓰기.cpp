#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";

    // 1. 앞부분: s 이전까지 그대로 복사
    for(int i = 0; i < s; i++) {
        answer += my_string[i];
    }

    // 2. 중간부분: overwrite_string을 통째로 넣기
    for(int i = 0; i < overwrite_string.length(); i++) {
        answer += overwrite_string[i];
    }

    // 3. 뒷부분: 원래 문자열에서 덮어쓰고 남은 나머지 복사
    // 시작 지점은 '시작위치(s) + 덮어쓴 길이'가 됩니다.
    for(int i = s + overwrite_string.length(); i < my_string.length(); i++) {
        answer += my_string[i];
    }
    
    return answer;
}