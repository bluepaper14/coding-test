#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> chess(8); //8개의 체스판 행의 개수.
    int cnt = 0;

    for(int i = 0; i < 8; i++) {
        cin >> chess[i]; //줄마다 입력 이를 8번 반복.
    }
    
    for(int num = 0; num < 8; num++) {
        if(num % 2 == 0) { //만약 행의 줄이 홀수번째라면 => 홀수칸이 하얀색
            for(int x = 0; x < 8; x+= 2) {
                if(chess[num][x] == 'F') {
                    cnt++;
                }
            }
        }
        else { //그렇지 않다면 => 짝수칸이 하얀색
            for(int y = 1; y < 8; y+= 2) {
                if(chess[num][y] == 'F') {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
/*
1.먼저 벡터 문자열 하나를 생성한다. 이를 8 x 8 배열을 만들다.
2.다음은 (0,0)이 하양 즉 
1 3 5 7
2 4 6 8
1 3 5 7
2 4 6 8
..
8개의 열을 순회하면된다. 이를 for문으로 만든다.
만약 F라면 cnt++한다.
*/