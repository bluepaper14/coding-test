#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);  // 52칸 0으로 초기화
    
    for(char c : my_string) {
        if(c >= 'A' && c <= 'Z') {
            answer[c - 'A']++;          // 0~25
        }
        else { // 'a' ~ 'z'
            answer[c - 'a' + 26]++;     // 26~51
        }
    }
    
    return answer;
}