#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int x = money / 5500; //개수
    int y = money % 5500; //거스름돈
    
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}