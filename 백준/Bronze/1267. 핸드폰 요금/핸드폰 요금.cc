#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int youngsik = 0; // Y 요금 총합
    int minsik = 0;   // M 요금 총합

    for (int i = 0; i < N; i++) {
        int time;
        cin >> time;

        youngsik += ((time / 30) + 1) * 10;
        minsik += ((time / 60) + 1) * 15;
    }

    if (youngsik < minsik) {
        cout << "Y " << youngsik << endl;
    }
    else if (minsik < youngsik) {
        cout << "M " << minsik << endl;
    }
    else {
  
        cout << "Y M " << youngsik << endl;
    }

    return 0;
}