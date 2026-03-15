#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int row = arr.size();
    int col = arr[1].size();
    int n = max(row, col); //n을 설정. 
    
    for(int i = 0; i < n; i++) {
        vector<int> temp (n, 0);
        
        answer.push_back(temp);
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            answer[i][j] = arr[i][j];
        }
    }
    return answer;
}