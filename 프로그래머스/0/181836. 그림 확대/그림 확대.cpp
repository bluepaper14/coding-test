#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(int i = 0; i < picture.size(); i++) {
        string line = picture[i];
        string temp = "";
        
        for(int j = 0; j < line.length(); j++) {
            for(int x = 0; x < k; x++) {
                temp += line[j];
            }
        }
        
        for(int y = 0; y < k; y++) {
            answer.push_back(temp);
        }
    }
    
    return answer;
}