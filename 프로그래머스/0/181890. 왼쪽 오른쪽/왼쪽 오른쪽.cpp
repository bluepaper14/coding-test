#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    for(int i = 0; i < str_list.size(); i++) {
        if(str_list[i] == "l") {
            for(int j = 0; j < i; j++) {
                answer.push_back(str_list[j]);
            }
            return answer;
        }
    
        if(str_list[i] == "r") {
            for(int x = i + 1; x < str_list.size(); x++) {
                answer.push_back(str_list[x]); 
            }
            return answer; 
        }
    }
    return answer;
}