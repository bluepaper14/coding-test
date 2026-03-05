#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> result;
    
    string temp;
    
    for(int i = 0; i < binomial.length(); i++) {
        if(binomial[i] == ' ') {
            if(!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } 
        else {
            temp += binomial[i];   
        }
    }
    
    // 마지막 값 처리
    if(!temp.empty()) {
        result.push_back(temp);
    }

    int x = stoi(result[0]);
    int y = stoi(result[2]);
    
    if(result[1] == "+") {
        answer = x + y;
    }
    else if(result[1] == "-") {
        answer = x - y;
    }
    else if(result[1] == "*") {
        answer = x * y;
    }
    
    return answer;
}

/*
1.문자열 binomial을 3가지 형태로 나눌 필요가 있다. 이를 공백을 기준으로 쪼개자.
2.만약 문자열이 공백이고 temp가 비어있지 않다면 쪼개고 벡터 배열에 넣자.
3.이를 순회하여 3개의 크기의 배열을 만든다.
4.그 다음은 문자열을 숫자로 변환하여 연산한다.
*/