#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T; // 테스트 케이스 개수

    while (T--) {
        int a, b;
        cin >> a >> b;

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }
        if (result == 0) cout << 10 << "\n";
        else cout << result << "\n";
    }
}