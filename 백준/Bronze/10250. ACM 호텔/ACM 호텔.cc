#include <iostream>

using namespace std;

int main() {

    int T, H, W, N;
    cin >> T;

    while (T--) {
        cin >> H >> W >> N;

        int floor, room;

        floor = N % H;
        room = (N / H) + 1;

        if (floor == 0) {
            floor = H;      // 0층 대신 최상층(H층) 배정
            room = N / H;   // 호수는 몫 그대로 사용
        }

        cout << floor * 100 + room << "\n";
    }

    return 0;
}