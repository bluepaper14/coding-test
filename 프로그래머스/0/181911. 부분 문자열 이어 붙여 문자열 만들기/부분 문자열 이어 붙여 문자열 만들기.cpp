#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int i = 0; i < my_strings.size(); i++) {
        int x = parts[i][0];
        int y = parts[i][1];
        string temp = my_strings[i];
        for(int j = x; j <= y; j++)
            answer += temp[j];
    }
    return answer;
}
/*
1.my_strings 배열의 크기를 이용해 for문으로 순회
2.parts i의 0 1 2차 배열로 특정 문자열 부분을 문자열 answer에 바로 삽입. 
3.이를 반복
*/