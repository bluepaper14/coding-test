#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for(int i = 0; i < numlist.size(); i++) {
        if(n <= numlist[i]) {
            if(numlist[i] % n == 0)
            answer.push_back(numlist[i]);
        }
    }
    return answer;
}
/*
1.numlist를 순회하며 배수인지 아닌지 판별하고 맞다면 answr 함수에 삽입한다
*/