#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int x = j + 1; x < nums.size(); x++) {
                int sum = nums[i] + nums[j] + nums[x];
                
                bool is_prime = true;
                if (sum < 2) is_prime = false; // 기본 예외 처리
                
                for (int y = 2; y * y <= sum; y++) { // 제곱근까지만 확인하면 효율적입니다.
                    if (sum % y == 0) {
                        is_prime = false;
                        break; // 소수가 아니면 더 돌 필요 없음
                    }
                }
                
                if (is_prime) {
                    answer++;
                }
            }
        }
    }

    return answer;
}