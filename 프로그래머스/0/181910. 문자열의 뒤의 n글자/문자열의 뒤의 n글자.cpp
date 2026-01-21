#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int x = my_string.length() - n;
     
    for(int i = x; i < my_string.length(); i++) {
        answer = answer + my_string[i];
    }
    return answer;
}