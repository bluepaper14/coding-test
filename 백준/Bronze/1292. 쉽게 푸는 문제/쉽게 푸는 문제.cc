#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    int M = 0;
    int result = 0;
    cin >> N >> M;
    vector<int>arr;

    for(int i = 1; i <= 1000; i++) { //출력해야할 숫자 지정
        for(int j = 0; j < i; j++) { //몇번 출력할지 지정
            arr.push_back(i);
        }
    }

    for(int i = N - 1; i < M; i++) {
        result += arr[i];
    }
    cout << result;
}
/*
3 7 이라는 의미는 ßß

3 4 5 6 7

1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, ...

*/