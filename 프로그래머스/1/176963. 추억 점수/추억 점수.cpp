#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    int temp; //그리움 점수
    vector<int> answer;
    for(int i = 0; i < photo.size(); i++) {
        vector<string> x = photo[i];
        
        for(int j = 0; j < x.size(); j++) {
            string q = x[j];
            for(int y = 0; y < name.size(); y++) {
                if(name[y] == q) {
                    temp += yearning[y];
                }
            }
        }
        answer.push_back(temp);
        temp = 0;
    }
    
    return answer;
}