#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string x = to_string(n);
    int temp = 0;
    for(char line : x) {
        temp += line - '0';
    }
    answer = temp;
    return answer;
}
/*
1. n을 문자열로 변환.
2.임시 변수 만들어서 합. 
3.이를 리턴
*/