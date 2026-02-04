#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double x = 0;
    for(int i = 0; i < numbers.size(); i++) {
        x += numbers[i];
        answer = x / numbers.size();
    }
    return answer;
}