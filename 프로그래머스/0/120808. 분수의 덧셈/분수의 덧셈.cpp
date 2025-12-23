#include <iostream>
#include <string>
#include <vector>

using namespace std;
// numer = 분자
// denom1 = 분모
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    int glc = 0;

    int bigdenom = denom1 * denom2; // 공통분모
    int numerx = numer1 * (bigdenom / denom1);
    int numery = numer2 * (bigdenom / denom2);

    int bignumer = numerx + numery; // 분자

    if (bigdenom > bignumer) { //만약. 분모가 분자보다 클때
        glc = bignumer;
        for (int i = glc; i >= 1; i--) {
            if (bigdenom % i == 0 && bignumer % i == 0) {
                glc = i;
                break;
            }
        }
    }
    else {
        glc = bigdenom;
        for (int i = glc; i >= 1; i--) {
            if (bigdenom % i == 0 && bignumer % i == 0) {
                glc = i;
                break;
            }
        }
    }
    int ansnumer = bignumer / glc;
    int ansdenom = bigdenom / glc;

    answer.push_back(ansnumer); // 일단 계산된 분자를 넣음
    answer.push_back(ansdenom); // 일단 계산된 분모를 넣음

    return answer;
}