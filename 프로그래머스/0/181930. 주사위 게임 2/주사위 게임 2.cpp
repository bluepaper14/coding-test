#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    int x = a + b + c;
    int y = (a * a) + (b * b) + (c * c);
    int z = (a * a * a) + (b * b * b) + (c * c * c);
    
    if(a == b) {
        if(b == c) 
            answer = x * y * z; //모든 숫자가 같을때
        else
            answer = x * y; //한 숫자만 같을때
    }
    else if(b == c) {
        if(a == c)
            answer = x * y * z;
        else
            answer = x * y;
    }
    else if(a == c) {
        if(b == c)
            answer = x * y * z;
        else
            answer = x * y;
    }
    else
        answer = x;
    
    return answer;
}

//세 숫자가 모두 다르면 a + b + c
//두 숫자만 같다면  (a + b + c) × (a2 + b2 + c2)점
//세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )