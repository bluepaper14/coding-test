#include <iostream>

using namespace std;

int main() {
    int N; //테스트 케이스
    int x; //자연수 개수
    int num = 0;
    int temp = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> x;
        for(int j = 0; j < x; j++) {
            cin >> num;
            temp += num;
        }
        cout << temp << "\n";
        temp = 0;
    }
    

    return 0;
}