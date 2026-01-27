#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string s;
    cin >> s;

    int alphabet[26] = { 0 }; // 빈도수를 저장할 배열

    // 2. 문자열을 돌며 빈도수 체크
    for (char c : s) {
        // 대문자로 변환 후 인덱스 계산 (A=0, B=1...)
        alphabet[toupper(c) - 'A']++;
    }

    int maxCount = 0;
    char result = '?';

    // 3. 가장 많이 사용된 알파벳 찾기
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > maxCount) {
            maxCount = alphabet[i];
            result = i + 'A'; // 인덱스를 다시 문자로 변환
        }
        else if (alphabet[i] == maxCount && maxCount != 0) {
            // 최댓값이 이미 있는데 또 같은 값이 나오면 '?'
            result = '?';
        }
    }

    cout << result << endl;

    return 0;
}