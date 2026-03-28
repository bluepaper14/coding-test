#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int p_size = p.length();      // 비교할 부분 문자열의 길이
    int t_size = t.length();      // 전체 문자열의 길이
    long long p_value = stoll(p); // p를 미리 숫자로 변환 (stoll 사용)

    for (int i = 0; i <= t_size - p_size; i++) {
        string temp = t.substr(i, p_size);
        long long temp_value = stoll(temp);
        if (temp_value <= p_value) {
            answer++;
        }
    }

    return answer;
}