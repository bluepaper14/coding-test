#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    string x;
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] < 'l')
            x += 'l';
        else 
            x += myString[i];
    }
    answer = x;
    
    return answer;
}