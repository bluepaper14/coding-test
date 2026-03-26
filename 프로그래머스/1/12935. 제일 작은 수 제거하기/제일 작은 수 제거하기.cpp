#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 1000;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    arr.erase(remove(arr.begin(), arr.end(), min), arr.end());
    for(int x : arr) {
        answer.push_back(x);
    }
    if(arr.empty()) {
        answer.push_back(-1);
    }
    return answer;
}