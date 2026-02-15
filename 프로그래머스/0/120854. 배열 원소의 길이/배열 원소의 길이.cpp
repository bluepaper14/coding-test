#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(int i = 0; i < strlist.size(); i++) {
        int x = strlist[i].length();
        answer.push_back(x);
    }
    return answer;
}
/*
1.각 배열을 for문으로 순회한다.
*/