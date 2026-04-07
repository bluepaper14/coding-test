#include <iostream>
using namespace std;

int main() {
    int A = 0;
    int B = 0;
    int C = 0;

    cin >> A >> B >> C;
    int value = C - B; //원가를 뺀 이율

    int answer = (A / value) + 1;

    if(value <= 0) {
        cout << -1;
    }
    else {
        cout << answer;
    }
}


/* 
A = 재료비
B = 인건비
C = 가격 책정
1000
70 
170
이라고 할때, 몇대를 팔아야 손익분기점을 넘을까?
먼저 고정비용 1000 + 원가 70  = 1070원이든다. 
이를 다르게 생각해보면. 원가를 뺀 이율이 100이다. 이를 11대부터 이율이 나오기 시작한다.
이를 계산해보자.

*/