#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int size = phone_number.length();
    for(int i = 0; i < size - 4; i++) {
        phone_number[i] = '*';
    }
    answer = phone_number;
    return answer;
}

/*
1.문자열 끝에서부터 뒷자리 4자리를 삭제한다. 
2.이를 다시 x를 추가한다.
*/