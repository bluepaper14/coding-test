#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b, c; 
    cin >> a;
    cin >> b;
    cin >> c;

    string temp = to_string(a * b * c);
    vector<int> arr(10, 0);

    for(char x : temp) {
        x = x - '0';
        arr[x]++;
    }
    for(int result : arr) {
        cout << result << endl;
    }
}
/*
1. 3개의 수를 입력을 받아 곱한다.
2. 결과를 문자열로 저장한다.
3. 이를 반복문으로 한 문자씩 출력한다
3-1. 0부터 9 크기가 10인 배열을 생성한다.
4. 만약 이게 ~ 라면 그 해당 배열을 증감한다.
5. 배열을 출력한다.
*/