#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int x = 1;
    int answer = 0;
    while(true) {
        if(n % x == 1) {
            answer = x;
            break;
        }
        else {
            x++;
        }
    }
    return answer;

}