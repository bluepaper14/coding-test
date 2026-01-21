#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    string name;
    
    for(int i = 0; i < my_string.length(); i++) {
    name = my_string.substr(i);
    if(name == is_suffix) {
        answer = 1;
        break;
    }
    else
        answer = 0;
}
    
    return answer;
}