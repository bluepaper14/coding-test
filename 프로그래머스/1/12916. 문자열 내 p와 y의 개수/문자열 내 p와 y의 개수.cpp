#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s)
{
    int cntp = 0;
    int cnty = 0;
    
    bool answer = true;
    for(char x : s) {
        char lowerX = tolower(x);
        if(lowerX == 'p')
            cntp++;
        if(lowerX == 'y')
            cnty++;
    }
    if(cntp == cnty) {
        answer = true;
    }
    else {
        answer = false;
    }

    return answer;
}