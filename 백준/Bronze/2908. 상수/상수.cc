#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A = 0;
    int B = 0;
    
    string x;
    string y;

    cin >> x >> y;
    
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    A = stoi(x);
    B = stoi(y);

    if(A > B) {
        cout << A;
    }
    else {
        cout << B;
    }
    return 0;
}


/*
1.두수를 먼저 문자열로 받는다.
2.마지막 문자열로부터 뽑아서 다시 넣는다.
3.이를 비교한다.
*/

