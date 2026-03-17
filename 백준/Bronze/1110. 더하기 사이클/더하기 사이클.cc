 #include <iostream>

using namespace std;

int main() {
    int num = 0;
    int A = 0; //몫
    int B = 0; //나머지
    int temp = 0;
    int result = 0;
    int answer = 0; 
    int cnt = 1;
    cin >> num;
    answer = num; //임시저장 

    while(1) {
        A = num / 10; //2
        B = num % 10; //1
        temp = A + B; //첫번째 자릿수
        if(temp >= 10) {
            temp %= 10;
        }
        result = (B * 10) + temp;
        
        if(result == answer) {
            cout << cnt;
            return 0;
        }
        else {
            num = result; //이를 다시 순회
            cnt++;
        }

    }
}

/*
1.수를 입력받는다.
2.10을 나누너 몫과 나머지를 저장한다.
2-1.몫 => 첫번째 자리수   나머지 => 두번째 자리수
3.몫과 나머지를 더한 값을 저장한다.
4.첫번째 자리수 x 10하여 더하여 만든다.
5.이를 처음 값과 비교한다. 같지 않다면 증감
*/