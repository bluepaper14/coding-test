#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    char temp = pat[pat.length()-1];
    int x = 0;
    for(int i = myString.length() - 1 ; i >= 0; i--) {
        if(myString[i] == temp) {
            x = i;
            break;
        }
    }
    for(int i = 0; i <= x; i++) {
        answer += myString[i];
    }
    
    return answer;
}

/*
1.먼저 pat 배열의 마지막 배열의 문자를 임시 변수에 저장한다
2.해당 문자를 myString 마지막 배열부터 비교하여 몇번째인지 순회하여 찾는다.
3.이를 출력한다
*/