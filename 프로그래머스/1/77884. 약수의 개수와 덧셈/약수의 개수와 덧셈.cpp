#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int result = 0;
    vector<int> temp;

    for(int x = left; x <= right; x++) {
        for(int i = 1; i <= x; i++) {
            if(x % i == 0) {
                temp.push_back(i);
            }
        }
        if(temp.size() % 2 == 0) {
            result += x;
        }
        else {
            result -= x;
        }
        temp.clear();
    }
    answer = result;
    return answer;
}