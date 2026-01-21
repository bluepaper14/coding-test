#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string x;
    string y;
    
    for(int i = 0; i < num_list.size(); i++) {
        if(num_list[i] % 2 == 0)  //짝수일때?
            x = x + to_string(num_list[i]);
        else //홀수일때?
            y = y + to_string(num_list[i]);
        
    }
    answer = stoi(x) + stoi(y);
    return answer;
}