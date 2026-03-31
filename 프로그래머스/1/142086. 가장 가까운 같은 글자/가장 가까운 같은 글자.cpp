#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> last_pos(26, -1);
    
    for (int i = 0; i < s.length(); i++) {
        int char_idx = s[i] - 'a';
        
        if (last_pos[char_idx] == -1) {
            answer.push_back(-1);
        } 
        else {
            answer.push_back(i - last_pos[char_idx]);
        }
        last_pos[char_idx] = i;
    }
    
    return answer;
}