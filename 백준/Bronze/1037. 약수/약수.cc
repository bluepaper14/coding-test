#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count;
    cin >> count;

    vector<long long> divisors(count); //count크기의 벡터
    for (int i = 0; i < count; i++) {
        cin >> divisors[i];
    }


    long long min_val = *min_element(divisors.begin(), divisors.end());
    long long max_val = *max_element(divisors.begin(), divisors.end());

 
    cout << min_val * max_val << endl;

    return 0;
}