#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int temp = n / slice;
    if(temp == 0) {
        temp = 1;
    }
    
    if(slice < n) {
        if(n % slice == 0) {
            answer = temp;
        }
        else {
            answer = temp + 1;
        }
    }
    else {
    answer = temp;
    }
    
    return answer;
}