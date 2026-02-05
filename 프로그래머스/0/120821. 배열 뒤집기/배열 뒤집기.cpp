#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for(int i = num_list.size() - 1; i >= 0; i--) {
        answer.push_back(num_list[i]);
    }
    return answer;
    
    
}

/* 
1.num_list 배열을 크기로 for문으로 끝에서부터 출력하자. 
*/