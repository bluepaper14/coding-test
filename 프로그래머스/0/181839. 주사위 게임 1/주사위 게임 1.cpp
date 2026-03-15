#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int cnt = 0;
    int answer = 0;
    if(a % 2 != 0)
        cnt++;
    if(b % 2 != 0)
        cnt++;
    
    if(cnt == 0) {
        answer = abs(a - b);
    }
    if(cnt == 1) {
        answer = 2 * (a + b);
    }
    if(cnt == 2) {
        answer = a * a + b * b;
    }
    return answer;
}