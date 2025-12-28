#include <string>
#include <vector>
#include <algorithm> // 정렬을 위해 필요

using namespace std;

int solution(vector<int> array) {
    // 1. 만약 정렬이 안 된 배열이라면 정렬 먼저 해야 중앙값이 됩니다.
    // (이미 정렬된 문제라면 sort는 생략 가능)
    sort(array.begin(), array.end());

    // 2. 중앙에 있는 인덱스 계산
    int mid_index = array.size() / 2;
    
    // 3. 해당 위치의 값을 꺼내서 반환 (push_back 아님!)
    return array[mid_index];
}