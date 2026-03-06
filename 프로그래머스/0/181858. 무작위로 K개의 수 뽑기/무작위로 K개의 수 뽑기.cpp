#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    bool istrue = true;
    
    for(int i = 0; i < arr.size(); i++) {
        
        if(answer.size() == k) {
            break;
        }
        
        if(answer.empty()) {
            answer.push_back(arr[i]);
        }
        else {
            for(int j = 0; j < answer.size(); j++) {
                if(answer[j] == arr[i]) {
                    istrue = false;
                }
            }
            if(istrue) {
                answer.push_back(arr[i]);
            }
            istrue = true;
        }
    }
    while(answer.size() < k) {
        answer.push_back(-1);
    }
    return answer;
}