#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string temp = "수박";
    string temp1 = "수";
    if(n % 2 == 0) {
        //n이 짝수라면
        for(int i = 0; i < n / 2; i++)
            answer += temp;
    }
    else {
        //n이 홀수라면
        for(int i = 0; i < n /2; i++)
            answer += temp;
            answer += temp1;
    }
    return answer;
}