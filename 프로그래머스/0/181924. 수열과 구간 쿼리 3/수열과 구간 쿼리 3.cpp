#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int k = 0; k < queries.size(); k++) {
        int i = queries[k][0];
        int j = queries[k][1];
    
        swap(arr[i],arr[j]);
    }
    answer = arr;
    return answer;
}

/*
0.for문으로 queries를 순회
1.queries의 배열을 뽑음 -> 0번칸이랑 3번칸이랑 바꿔
2.swap으로 서로 스위칭
4.다음 배열을 진행.
*/