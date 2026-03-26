using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long temp = 0; //총 금액
    long long x = 0;
    
    while(count--) {
        x += price;
        temp += x;
    }
    if(money > temp) {
        return 0;
    }
    else {
        return temp - money;
    }
    return answer;
}