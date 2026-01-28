#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n);
    while(1) {
        if(n == 1) {
            break;
        }
        else {
            if(n % 2 == 0) { 
                n = n / 2;
                answer.push_back(n);
            }
                
            else {
                n = (3 * n) + 1;
                answer.push_back(n);
            }
        }
    
    }
    return answer;
}
/* 
1.n이 짝수인지 홀수인지 분기를 나눈다.
2.만약 짝수이면 2로 나누고 홀수이면 3 * x + 1를 적용한다.
3.바뀐 n을 배열에 삽입한다.
4.이를 반복하고 n이 1이면 넣고 break한다.
*/