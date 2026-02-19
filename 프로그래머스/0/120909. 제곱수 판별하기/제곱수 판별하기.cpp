#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    while(1) {
        
        if(x * x > n) {
            answer = 2;
            return answer;
        }
        
        if(x * x == n) {
            answer = 1;
            return answer;
        }
        
        x++;
    }
}

/*
1.하나의 변수 x를 선언하여 제곱했을때, n과 동일하면 1을 리턴 시킨다
2.만약 n보다 크다면 2를 리턴시킨다.
*/