#include <iostream>
#include <vector>

using namespace std;
int main() {
    int N = 0; //참가자수
    int x = 0; //사이즈 개수
    int T = 0; //티셔츠 묶음수
    int P = 0; //펜 묶음수
    vector<int> size;
    cin >> N;
    for(int i = 0; i < 6; i++) {
        cin >> x;
        size.push_back(x);
    }
    cin >> T >> P;
    int cnt = 0;

    for(int q : size) {
        if(q % T == 0) {  
            cnt += (q / T);
        }
        else {
            cnt += (q / T) + 1;
        }
    }

    int line1 = 0;
    int line2 = 0;

    line1 = N / P;
    line2 = N % P;

    cout << cnt << '\n';
    cout << line1 << " "<< line2;

    /* 
    1.각 티셔츠에 대한 묶음수를 판별하고 이를 합쳐야한다.
    */
    
    return 0;
}