#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++) {
        for(int j = 0; j < n; j++) {
            answer += my_string[i];
        }
    }
    
    return answer;
}
/*
1.문자열 내부의 하나씩 문자를 순회할때 또 하나의 for문을 생성하여 이중 for문을 만든다.
*/