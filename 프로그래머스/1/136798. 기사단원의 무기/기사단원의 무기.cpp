#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int cnt = 0;
    vector<int> arr;
    for(int i = 1; i <= number; i++) {
        for(int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                if (j * j == i) cnt++;      // 제곱수
                else cnt += 2;              // 짝 약수
            }
        }
        arr.push_back(cnt);
        cnt = 0;
    }
    for(int q = 0; q < arr.size(); q++) {
        if(arr[q] > limit) {
            arr[q] = power;
        }
    }
    
    for(int y : arr) {
        answer += y;
    }
    return answer;
}