#include <string>
#include <vector>
#include <climits> //INT_MAX 사용
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < queries.size(); i++) {
        int s = queries[i][0]; 
        int e = queries[i][1]; 
        int k = queries[i][2]; 
        int temp = INT_MAX; 
        for (int j = s; j <= e; j++) {
            // k보다 커야 함
            // 지금까지 찾은 값 중 가장 작아야 함
            if (arr[j] > k && arr[j] < temp) 
                temp = arr[j];
        }
        if(temp == INT_MAX) {
            answer.push_back(-1);
        }
        else
            answer.push_back(temp);
    }
    return answer;
}

/*
1.queries 배열범위를 가지고 arr 추출한다.
2.k보다 크고 arr[i]해당 값보다 작은 정수를 뽑는다.
3.뽑은 수를 answer에 삽입한다.
4.이 과정을 queries크기만큼 반복시킨다.
*/
