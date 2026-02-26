#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for(int i =0; i < intervals.size(); i++) {
        int x = intervals[i][0];
        int y = intervals[i][1];
        
        for(int j = x; j <= y; j++) {
            answer.push_back(arr[j]);
        }
    }
    
    return answer;
}