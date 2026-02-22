#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int j = 0; j < intStrs.size(); j++) {
        string temp = "";
        string x = intStrs[j];
        for(int i = s; i < s + l; i++) {
            temp += x[i];
        }
        if(stoi(temp) > k) {
            answer.push_back(stoi(temp));
        }
}
    return answer;
}