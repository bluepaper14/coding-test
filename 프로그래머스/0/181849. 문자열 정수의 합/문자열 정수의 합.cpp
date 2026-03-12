#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string num_str) {
    int temp = 0;
    for(char x : num_str) {
        temp += x - '0';
    }
    int answer = temp;
    return answer;
}