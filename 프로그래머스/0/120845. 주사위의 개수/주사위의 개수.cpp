#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    // 가로 세로 높이 순으로 배열 안에 삽입되어 있음.
    vector<int> temp;
    for(int x : box) {
        temp.push_back(x / n);
    }
    answer = temp[0] * temp[1] * temp[2];
    return answer;
}
//상자 안에 주사위를 넣어야한다.
//주사위의 개수를 구하자.

/*
1. 먼저 주사위에 대한 길이를 가지고 가로에 들어갈. 그리고 세로에 들어갈 주사위의 개수를 구하고 곱한다. 
2. 높이도 물론 구하고 이를 전부 곱한다.
*/