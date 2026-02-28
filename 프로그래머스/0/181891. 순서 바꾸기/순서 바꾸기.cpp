#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = n; i < num_list.size(); i++) {
        answer.push_back(num_list[i]);
    }
    for(int j = 0; j <= n - 1; j++) {
        answer.push_back(num_list[j]);
    }
    
    return answer;
}

/* 
1.n을 기준으로 끝까지 출력. 후에 이전을 출력해서 삽입하면 되니 for문 2번 순회
*/