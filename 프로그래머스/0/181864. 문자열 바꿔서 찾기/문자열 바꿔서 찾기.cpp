#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string result;
    for(char x : myString) {
        if(x == 'A') {
           result += 'B';
        }
        else {
            result += 'A';
        }
    }
    if(result.find(pat) != string::npos)
        return 1;
    else
        return 0;
    
}