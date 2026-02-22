#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    size_t pos = my_string.find(target);
    
    if(pos != std::string::npos) {
        answer = 1;
    }
    else {
        answer = 0;
    }
    return answer;
}