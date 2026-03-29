#include <iostream>
#include <algorithm> // min 함수 사용을 위해 필요

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int result = 1; //최대공약수
    int result1 = 0; //최소공배수

    int min_value = min(N, M);

    for(int i = min_value; i > 0; i--) {
        if(N % i == 0 && M % i == 0) { //둘다 나눠지는가?
            result = i;
            break; 
        }
    }

    result1 = (N * M) / result;

    cout << result << '\n';
    cout << result1;
    return 0;
}