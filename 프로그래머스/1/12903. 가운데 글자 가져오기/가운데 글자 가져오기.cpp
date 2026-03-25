#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.length();
    if(size % 2 == 0) {
        for(int i = (size / 2) - 1; i <= size / 2; i++) {
            answer += s[i];
        }
    }
    else {
        int x = size / 2;
        answer += s[x];
    }
    return answer;
}