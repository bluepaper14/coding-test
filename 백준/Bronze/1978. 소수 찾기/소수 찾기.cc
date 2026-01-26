#include <iostream>

using namespace std;

int main() {
    int T;
    int x;
    int pls = 0; // 소수의 개수를 셀 변수

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x;

        if (x <= 1) continue; // 1은 소수가 아님

        bool isPrime = true; // 소수인지 판별할 깃발(flag)

        // 2부터 x-1까지 나누어본다
        for (int j = 2; j < x; j++) {
            if (x % j == 0) {
                isPrime = false; // 나누어떨어지면 소수가 아님!
                break;           // 더 볼 필요도 없이 탈출
            }
        }

        // 루프가 다 끝난 후에, 한 번도 나누어떨어진 적이 없다면 소수!
        if (isPrime) {
            pls++;
        }
    }

    cout << pls << endl;
    return 0;
}