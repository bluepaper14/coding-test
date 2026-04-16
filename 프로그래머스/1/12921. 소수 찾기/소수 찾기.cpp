#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 2; i <= n; i++) {
    bool is_prime = true;
    for(int j = 2; j * j <= i; j++) { // i의 제곱근까지만 확인하면 됨
        if(i % j == 0) {
            is_prime = false;
            break;
        }
    }
    if(is_prime) answer++;
}
    return answer;
}