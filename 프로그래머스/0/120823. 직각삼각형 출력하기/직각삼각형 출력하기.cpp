#include <iostream>

using namespace std;

int main(void) {
    int n;
    int x;
    
    cin >> x;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}