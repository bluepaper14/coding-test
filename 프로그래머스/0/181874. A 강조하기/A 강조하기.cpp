#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++) {
            if(isupper(myString[i]))
                myString[i] = tolower(myString[i]);
            if(myString[i] == 'a') 
                myString[i] = toupper(myString[i]);

        
    }
    answer = myString;
    return answer;
}