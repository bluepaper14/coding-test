#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N = 0;
    vector<int> temp;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> N;
        sum += N;
        temp.push_back(N);
    }
    
    int result = sum / 5; //평균
    sort(temp.begin(), temp.end());
    int result2 = temp[2]; //중앙값

    cout << result << "\n" << result2;
    
}