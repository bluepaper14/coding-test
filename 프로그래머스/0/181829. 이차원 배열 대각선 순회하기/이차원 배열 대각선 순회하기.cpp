#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    vector<int> temp;
    for(int i = 0; i < board.size(); i++) {
        temp = board[i];
        for(int j = 0; j < temp.size(); j++) {
            if(i + j <= k) {
                answer += board[i][j];
            }
        }
    }
    return answer;
}