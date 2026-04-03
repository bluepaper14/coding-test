#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string s) {
    int answer = 0;
    string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < 10; i++) {
        s = regex_replace(s, regex(digits[i]), to_string(i));
    }
    answer = stoi(s);
    return answer;
}