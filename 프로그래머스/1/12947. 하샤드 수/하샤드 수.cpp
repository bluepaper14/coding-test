#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string temp = to_string(x);
    int y = 0;
    int result = 0;
    
    for(int i = 0; i < temp.length(); i++) {
        y = temp[i] - '0';
        result += y;
    }
    if(x % result != 0)
        answer = false;
    return answer;
}