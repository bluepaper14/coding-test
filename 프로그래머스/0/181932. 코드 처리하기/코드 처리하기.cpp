#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    for(int i = 0; i < code.length(); i++) {
        if(code[i] == '1') {//문자열중 1이 있는지 판별
            if(mode == 0) //mode 변환
                mode = 1;
            else
                mode = 0;
        }
        if(code[i] != '1') {
        if(mode == 0 && i % 2 == 0) 
                answer += code[i];
        if(mode == 1 && i % 2 != 0) 
                answer += code[i]; 
        }
    }
    
    if (answer.empty()) return "EMPTY";
    
    return answer;
}

/*mode를 바꾸는 분기
1.입력된 문자가 1이면 mode변경 -> 변경중엔 ret 변함없음
2.mode가 0이고 i가 짝수일때만 code[i]를 추가
3.mode가 1이고 i가 홀수일때만 code[i]를 추가 
*/