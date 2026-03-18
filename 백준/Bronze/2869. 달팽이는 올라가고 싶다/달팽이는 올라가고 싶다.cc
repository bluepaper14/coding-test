#include <iostream>
#include <cmath> // ceil 함수를 쓰기 위해 필요

using namespace std;

int main() {
    double bright, night, hight;
    cin >> bright >> night >> hight;

    // 1. 마지막 날 낮에 올라갈 거리를 미리 뺌
    double goal = hight - bright;

    // 2. 하루에 실제로 올라가는 거리
    double day_move = bright - night;

    // 3. (남은 거리 / 하루 이동량)을 계산하고 '올림' 처리
    // 예: 2.1일이 필요하다면 실제로는 3일이 걸리는 것임
    int days = ceil(goal / day_move) + 1;

    cout << days << endl;

    return 0;
}



/*
1.bright night hight 변수를 선언한다.
2.answer도 선언한다. => 높이를 비교하기 위함
2-1.date를 선언
3.answer를 bright만큼 증감시킨다.
4.night만큼 감소시킨다.
5.answer와 hight를 비교한다. 만약 같다면 date를 출력
6.아니라면 date를 증감. 이를 순회
*/