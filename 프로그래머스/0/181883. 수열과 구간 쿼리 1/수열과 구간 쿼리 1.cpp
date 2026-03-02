#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++) {
        int x = queries[i][0];
        int y = queries[i][1];       
        for(int j = x; j <= y; j++) {
            arr[j]++;
        }
    }
    answer = arr;
    return answer;
}