#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N = 0; 
    int M = 0;

    bool issou = true; //소수 판별

    vector<int> arr;

    int result1 = 0; //소수들의 합 결과
    int result2 = 0; //소수들의 최솟값

    cin >> N >> M;
    for(int i = N; i <= M; i++) { //해당 범위에서 소수 판별 시작.
        if(i < 2) continue;

        for(int j = 2; j < i; j++) { //판별하는 수에 대하여 하나씩 확인한다.
            if(i % j == 0) { //만약 나눈수가 0이라면 -> 합성수라는 의미. false로 변환
                issou = false;
                break;
            }
        }
        if(issou) { //만약 범위에 해당되는 모든수를 나눴을때 true -> 소수
            arr.push_back(i);
        }
        else {
            issou = true;
        }
    }
    
    if(arr.empty()) {
        cout << -1;
    }
    else {
        for(int q : arr)
        result1 += q;
    result2 = arr[0];
        cout << result1 << "\n";
        cout << result2;
    }
}

/*
소수.

먼저 소수를 판별하기 위해서는
-> 약수가 1과 자기 자신 뿐만이어야한다. 
1. 판별하는 수가 x라고 정의할때
이를 1부터 x - 1까지 x를 나눈 나머지가 0이 아니라면 된다. 
if(x % i == 0) {
    isodd = false;
} 
이렇게 처리해서 해당 범위 안에 소수가 맞는지 아닌지 불로 결과를 보내주고 만약 true라면 벡터 배열에 모와둔다. 
이에 대한 합을 도출하고 최솟값도 출력한다. 

만약 소수를 넣어두는 임시 벡터가 arr.empty() 라면 -1을 출력하고 종료시킨다. 
*/