#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(int i = 0; i < s1.size(); i++) {
        for(int j = 0; j < s2.size(); j++) {
            if(s1[i] == s2[j]) {
                answer++;
            }
        }
    }
    return answer;
}

/*
1. 각 배열에 대한 크기를 가지고 for문으로 순회하자.
*/