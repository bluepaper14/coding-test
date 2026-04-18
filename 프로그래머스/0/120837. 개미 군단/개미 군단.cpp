#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int temp = hp / 5; //대장개미
    int temp1 = hp % 5;
    int temp2 = temp1 / 3; //병정개미
    int temp3 = temp1 % 3;
    
    cout << temp << " " << temp1 << " " << temp2;
    answer = temp + temp2 + temp3;
    
    return answer;
}

/*
장군개미 = 5
병정개미 = 3
일개미 = 1
최소한의 병력을 출력하기 위해선 먼저 hp를 장군개미로 나눈 나머지를 병정이. 그리고 일개미의 몫을 더한다.
*/

