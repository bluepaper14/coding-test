#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // 1층은 숫자 1 하나뿐이므로, 초기값을 1로 설정합니다.
    long long range_max = 1; 
    int layer = 1;    // 결과값 (최소 이동 횟수)
    int increment = 6; // 각 층마다 늘어나는 숫자 개수 (6, 12, 18...)

    // 입력받은 N이 현재 층의 최댓값(range_max)보다 큰 동안 반복
    while (N > range_max) {
        range_max += increment; // 다음 층의 최댓값 계산
        increment += 6;         // 다음 층은 6개 더 많이 늘어남
        layer++;                // 층수 증가
    }

    cout << layer << endl;

    return 0;
}