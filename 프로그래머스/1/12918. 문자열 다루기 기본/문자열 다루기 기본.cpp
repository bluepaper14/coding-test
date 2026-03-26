#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() != 4 && s.length() != 6) {
        answer = false; //길이가 4도 6이 아니라면?
    }
    for (char c : s) {
        if (!isdigit(c)) { //숫자아니라면? 
            answer = false;  
        }
    }
    return answer;
}