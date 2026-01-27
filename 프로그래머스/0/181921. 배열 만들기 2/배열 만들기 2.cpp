#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <=r; i++) {
        bool isPrime = true;
        string x = to_string(i);
        for(int j = 0; j < x.length(); j++) {
            if(x[j] != '0' && x[j] != '5') {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            answer.push_back(i);
        }
    }
    if(answer.empty()) {
            answer.push_back(-1);
        }
    return answer;
}