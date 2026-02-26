#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    // 1. 초기값 설정: first는 가장 큰 값으로, last는 가장 작은 값으로
    int first_idx = numeric_limits<int>::max();
    int last_idx = -1;

    // 2. 배열을 한 번 순회하며 2의 첫 위치와 마지막 위치 찾기
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            // 처음 2를 발견했을 때만 딱 한 번 저장
            if (first_idx == numeric_limits<int>::max()) {
                first_idx = i;
            }
            // 2를 발견할 때마다 갱신 (결국 마지막 인덱스가 남음)
            last_idx = i;
        }
    }

    // 3. 예외 처리: 2가 하나도 없는 경우
    if (last_idx == -1) {
        return {-1};
    }

    // 4. 구간 자르기 (Slicing)
    // arr.begin() + first_idx : 시작점
    // arr.begin() + last_idx + 1 : 끝점 (마지막 요소 포함을 위해 +1)
    vector<int> answer(arr.begin() + first_idx, arr.begin() + last_idx + 1);

    return answer;
}