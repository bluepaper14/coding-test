#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0; //주어진 카드수
    int M = 0; //최대합
    int x = 0; //카드숫자
    vector<int> arr; //카드 저장 배열

    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int size = arr.size();
    int max = 0; //큰수 임시 변수 설정.
    int result = 0;

    for(int x = 0; x < N - 2; x++) {
        for(int y = x + 1; y < N - 1; y++) {
            for(int z = y + 1; z < N; z++) {
                result = arr[x] + arr[y] + arr[z]; 
                if(result <= M) {
                if(result > max) {
                    max = result;
                }
            }           
            }
            
        }
    }
    cout << max;

    
}




/*

5 21
5 6 7 8 9

*/