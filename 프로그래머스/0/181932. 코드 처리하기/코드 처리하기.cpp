#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false; //bool 생성 초기는 ture 선언
    for(int i = 0; i < code.length(); i++) {
        if(code[i] == '1') {//문자열중 1이 있다면
        mode = !mode; //true -> false로
        }
        if(code[i] != '1') {
        if(mode == false && i % 2 == 0) 
                answer += code[i];
        if(mode == true && i % 2 != 0) 
                answer += code[i]; 
        }
    }
    
    if (answer.empty()) return "EMPTY";
    
    return answer;
}