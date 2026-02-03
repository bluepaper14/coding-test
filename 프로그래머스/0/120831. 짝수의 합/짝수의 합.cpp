#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = n; i > 0; i--) {
        if(i % 2 == 0) {
            answer += i;
        }
    }
    return answer;
}

/*
1.n을 이용해서 10부터 0까지 for문으로 반복문을 만들자.
2.짝수인지 분기를 나누고 짝수라면 answer에 더한다.
*/