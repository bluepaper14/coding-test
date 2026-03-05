#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    bool isthat = true;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < delete_list.size(); j++) {
            if(arr[i] == delete_list[j]) {
                isthat = false;
            }
        }
        if(isthat) {
            answer.push_back(arr[i]);
        }
        isthat = true;
    }
    return answer;
}