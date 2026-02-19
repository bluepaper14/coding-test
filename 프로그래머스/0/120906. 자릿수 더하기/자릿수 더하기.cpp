#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int sum = 0;
    
    while (n > 0) {
        sum += n % 10; // 1. 마지막 자릿수를 더함 (4 -> 3 -> 2 -> 1)
        n /= 10;       // 2. 마지막 자릿수를 제거 (123 -> 12 -> 1 -> 0)
    }
    answer = sum;
    return answer;
}