#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int x = 0;
    vector<int> arr;

    for(int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    for(int num = 0; num < arr.size(); num++) {
        cout << arr[num] << "\n"; 
    }
}

