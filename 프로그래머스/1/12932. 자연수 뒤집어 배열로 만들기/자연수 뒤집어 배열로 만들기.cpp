#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string temp = to_string(n);
    for(int i = temp.length() - 1; i >= 0; i--) {
        int x = temp[i] - '0';
        answer.push_back(x);    
    }
    
   
    return answer;
}