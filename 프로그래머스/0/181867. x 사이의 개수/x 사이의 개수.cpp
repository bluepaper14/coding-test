#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt = 0;
    
    for(char x : myString) {
        if(x == 'x') {
            answer.push_back(cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    answer.push_back(cnt);
    
    
    return answer;
}
/*
1.myString을 순회한다.
2.만약 순회중 x가 출력된다면 push하고 cnt를 초기화
*/