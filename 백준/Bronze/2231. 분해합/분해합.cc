#include <iostream>
#include <string>
#include <algorithm> // max 함수 사용

using namespace std;

int main() {
    int N;
    cin >> N;

    string temp = to_string(N);
    int line = temp.length();
    
    int M = max(1, N - (9 * line));

    while(M < N) {
        int result = 0;
        int current = M;

        int temp_m = M;
        while(temp_m > 0) {
            result += temp_m % 10;
            temp_m /= 10;
        }

        if(M + result == N) {
            cout << M;
            return 0; 
        }
        M++;
    }
    cout << 0 << endl;
    return 0;
}