#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;

    if(a == b && a == c) //3개의 수가 모두 같을때
    {
        answer = (a+b+c)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c);
    }
    else if(a == b || a == c || b == c) //2개의 수가 모두 같을때
    {
        answer = (a+b+c)*(a*a+b*b+c*c);
    }
    else //모두 다를때
    {
        answer = (a+b+c);
    }

    return answer;
}

//세 숫자가 모두 다르면 a + b + c
//두 숫자만 같다면  (a + b + c) × (a2 + b2 + c2)점
//세 숫자가 모두 같다면 (a + b + c) × (a2 + b2 + c2 ) × (a3 + b3 + c3 )