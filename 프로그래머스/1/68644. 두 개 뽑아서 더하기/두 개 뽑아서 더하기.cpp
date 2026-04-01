#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> temp; //임시 벡터 배열
    int x = 0;
    
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            x = numbers[i] + numbers[j];
            temp.push_back(x);
            x = 0;
        }
    }
    
    for(int x : temp) {
        cout << x << " ";    
    }
    set<int> s(temp.begin(), temp.end());
    answer.assign(s.begin(), s.end());
    
    
    
    return answer;
}

/* 
1.벡터에 포함된 모든 경우의 수의 합을 먼저 추출하여. 새로운 벡터 배열에 넣자.
2.이후 임시 벡터 배열에서 set함수를 사용하여 중복을 제거하고 정렬한다. 
*/