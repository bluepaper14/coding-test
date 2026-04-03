#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; //몇번째 피보나치수

    cin >> N;
    vector<int> temp;
    temp.push_back(0);
    temp.push_back(1);
    int x = temp.size();

    while(x <= 45) { //45개에 대한 비보나치 수열은 삽입해보자.
        temp.push_back(temp[x - 1] + temp[x - 2]);
        x = temp.size();
    }

    int result = temp[N];

    cout << result;
}


/*
피보나치의 수   
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
이전 2개의 합을 이용해 다음수를 구하는 수열이다. 이를 코드로 작성해보자.
일단. 0과 1을 최소 피보나치 최소값을 넣어두고 이를 n 이 45번째까지이니. 이를 벡터값에 다 넣어서 출력해보자.
*/