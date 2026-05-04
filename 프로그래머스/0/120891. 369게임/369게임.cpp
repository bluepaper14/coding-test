#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    string x = to_string(order);
    for(int i = 0; i < x.length(); i++) {
        if(x[i] == '3' || x[i] == '6' || x[i] == '9') {
            answer++;
        }
    }
    
    return answer;
}