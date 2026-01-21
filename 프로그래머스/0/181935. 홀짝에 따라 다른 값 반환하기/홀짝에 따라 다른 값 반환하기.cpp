#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(n % 2 == 0) { //n is even?
        for(int i = 0; i <= n; i+=2 ) {
            answer += (i * i);
        }
    }
    else { //n is odd?
        for(int i = 1; i <= n; i+=2 ) { 
            answer = answer + i;
        }
    }
    return answer;
}