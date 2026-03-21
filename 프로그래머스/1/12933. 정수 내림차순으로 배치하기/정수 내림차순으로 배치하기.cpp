#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string temp = to_string(n);
    sort(temp.rbegin(), temp.rend());
    answer = stoll(temp);
    
    return answer;
}

/*
1. 숫자 n을 문자열 temp로 변환한다.
2. 문자열 temp의 한 문자를 숫자 벡터에 삽입한다.
3. 이를 sort로 정렬시킨다.
*/