#include <string>
#include <iostream>

using namespace std;

string solution(string s) {
    int cnt = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            cnt = 0;
        } 
        else {
            if (cnt % 2 == 0)
                s[i] = toupper(s[i]); 
            else 
                s[i] = tolower(s[i]);
            cnt++; // 글자를 처리했을 때만 카운터 증가!
        }
    }
    return s;
}