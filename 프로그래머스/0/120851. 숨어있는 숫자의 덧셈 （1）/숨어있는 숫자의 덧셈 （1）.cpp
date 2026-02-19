#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i = 0; i < my_string.length(); i++) {
        if(isdigit(my_string[i])) {
            answer += my_string[i] - '0';
        }
    }
    
    return answer;
}

/*
1. 문자열인지 아닌지 판별을 하는 방법?
2.
*/