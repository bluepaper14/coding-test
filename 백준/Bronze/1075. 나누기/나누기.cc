#include <iostream>
using namespace std;

int main() {
    string N;
    int F;
    cin >> N >> F;

    int len = N.length();

    // 뒤 두 자리 00으로 초기화
    N[len - 1] = '0';
    N[len - 2] = '0';

    // 00 ~ 99 탐색
    for (int i = 0; i < 100; i++) {
        int num = stoi(N) + i;

        if (num % F == 0) {
            if (i < 10) cout << "0";
            cout << i;
            break;
        }
    }

    return 0;
}