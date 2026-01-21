#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string x = to_string(a) + to_string(b);
    string y = to_string(b) + to_string(a);
    
    int x1 = stoi(x);
    int y1 = stoi(y);
    
    if( x1 > y1) {
        answer = x1;
    }
    else
        answer = y1;
    return answer;
}