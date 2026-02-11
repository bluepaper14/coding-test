#include <string>
#include <vector>
#include <algorithm> //sort 사용

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.rbegin(), numbers.rend());
    
    answer = numbers[0] * numbers[1];
    
    return answer;
}
/*
1.먼저 numbers 배열에 있는 numbers를 sort한다.
2.0 1번째 값들을 곱한다
*/


