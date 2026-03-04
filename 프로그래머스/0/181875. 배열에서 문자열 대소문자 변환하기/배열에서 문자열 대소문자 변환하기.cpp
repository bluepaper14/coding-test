#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i = 0; i < strArr.size(); i++) { //전체 배열 순회
        string temp = strArr[i];
        for(int j = 0; j < temp.length(); j++) {
            if(i % 2 == 0) //짝수번째 배열일때
                temp[j] = tolower(temp[j]);
            else
                temp[j] = toupper(temp[j]);
        }
        answer.push_back(temp);
    }
    
    return answer;
}