#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(int n : array) {
        if(n > height) 
            answer++;
    }
    return answer;
}

/*
1. array 크기를 따라 for 반복문을 돌린다.
2. height보다 크다면 result++ 증감 시킨다.
*/