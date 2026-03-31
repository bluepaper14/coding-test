#include <iostream>

using namespace std;

int main() {
    int Q = 0;
    int K = 0;
    int N = 0;

    cin >> Q;

    for(int i = 0; i < Q; i++) {
        cin >> K; //층
        cin >> N; //호

        int apt[15][15] = {0, };

        for(int i = 1; i <= N; i++) {
            apt[0][i] = i;
        }

        for (int i = 1; i <= K; i++) {         // 1층부터 k층까지
            for (int j = 1; j <= N; j++) {     // 1호부터 n호까지
                if (j == 1) {
                    apt[i][j] = 1;             // 모든 층의 1호는 항상 1명
                } else {
                    apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
                }
            }
        }
        cout << apt[K][N] << endl;
    }
}


/*
a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합
양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 
0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.

예를 들어 
k = 1
N = 3
1층에 3호 몇명이 살고 있을까.

3층 1 5 15
2층 1 4 10
1층 1 3 6
0층 1 2 3
*/