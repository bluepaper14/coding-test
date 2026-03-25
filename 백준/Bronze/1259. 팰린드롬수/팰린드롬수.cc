    #include <iostream>
    #include <string>
    #include <algorithm>

    using namespace std;

    int main() {

        string n;

        while (true) {
            cin >> n;
            if (n == "0") break;

            bool is_palindrome = true;
            int size = n.length();

            for (int i = 0; i < size / 2; i++) {
                if (n[i] != n[size - 1 - i]) {
                    is_palindrome = false;
                    break;
                }
            }

            if (is_palindrome) {
                cout << "yes" << "\n";
            } else {
                cout << "no" << "\n";
            }
        }

        return 0;
    }


        /*
        1. 가장 먼저 문자열을 입력 받는다.
        2. 문자열의 크기를 변수로 선언한다.
        3. 문자의 수가 짝수인지 홀수인지 분기르 나눠 판별한다. 

        4. 만약 짝수라면 크기를 절반를 나눠서 for문을 돌려 2개의 임시 문자열을 생성.
        이를 각각 나눠서 비교하는데 2번째 임시 문자열은 거꾸고 넣는다.

        5. 각 문자열의 수를 for문을 돌려 하나씩 확인하는데 하나라도 문자열이 다르면 no출력하고 종료. 기본적으로 Yes를 출력
        */