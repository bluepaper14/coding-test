#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = 1;
    int temp = 0;
    while(cnt <= n) {
        if(n % cnt == 0) {
            temp += cnt;
        }
        cnt++;
    }
    int answer = temp;
    return answer;
}