#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N = 0;
    int x = 0;
    cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    
    for(int y : arr) {
        cout << y << '\n';
    }

    return 0;
}