#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int x = 1;
    int y = 0;
    
    for(int i = 0; i < num_list.size(); i++) {
        x *= num_list[i];  //모든 원소들의 곱
        y += num_list[i];
    }
    int zy = y * y;
    
    if(x < zy)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}