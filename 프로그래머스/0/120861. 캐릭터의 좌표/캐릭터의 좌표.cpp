#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> temp(2, 0); // 현재 위치 [0, 0]
    
    int x_limit = board[0] / 2;
    int y_limit = board[1] / 2;
    
    for(string key : keyinput) {
        if(key == "left") {
            if (temp[0] > -x_limit) temp[0]--;
        }
        else if(key == "right") {
            if (temp[0] < x_limit) temp[0]++;
        }
        else if(key == "up") {
            if (temp[1] < y_limit) temp[1]++;
        }
        else if(key == "down") {
            if (temp[1] > -y_limit) temp[1]--;
        }
    }
    return temp;
}