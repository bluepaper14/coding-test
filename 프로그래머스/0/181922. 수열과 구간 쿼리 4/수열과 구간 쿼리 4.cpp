#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int i = 0; i < queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];

        // k가 0이면 어떤 i도 배수가 아니므로 스킵
        if (k == 0) continue;

        for (int x = s; x <= e; x++) {
            // 인덱스 x가 k의 배수인지 검사
            if (x % k == 0) {
                arr[x] += 1;
            }
        }
    }
    return arr;
}
