#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int temp = 0;

    for(int i = 0; i < number.size(); i++) {
        for(int j = i + 1; j < number.size(); j++) {
            for(int x = j + 1; x < number.size(); x++) {
                temp = number[i] + number[j] + number[x];
                if(temp == 0) {
                    answer++;
                }
                temp = 0;
            }
        }
    }
    return answer;
}