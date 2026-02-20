#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int temp = 0;
    int x = 0;
    
    for(int i = 0; i < array.size(); i++) {
        if(array[i] > temp) {
            temp = array[i];
            x = i;
        }
    }
    answer.push_back(array[x]);
    answer.push_back(x);
    return answer;
}