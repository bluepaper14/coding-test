#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int x = 0;
    int temp = 0;
    
    while (n >= a) {
    temp = n / a;        // 교환 횟수
    x = n % a;           // 남은 병
    
    answer += temp * b;  // 받은 병
    
    n = x + (temp * b);  // 다음 상태
    
    }
    return answer;
}

/*
1.먼저 정의를 해보자. 예를들어 2개를 1개로 바꿔준다고 했을때 n이 20개이다.
2. n / a 의 몫을 임시변수에 저장. 그리고 나머지가 만약 a 이하라면 종료. 아니면 계속
3. 이를 반복한다. 총합개수를 출력한다.
*/