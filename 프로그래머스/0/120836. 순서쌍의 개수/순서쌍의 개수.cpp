#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            answer++;
        }
    }
    return answer;
}

/*
1.순서쌍의 개수를 구할때 1부터 해당n의 크기까지 for문으로 n을 나눌때 나머지가 0이면 answer의 개수를 추가함.
*/