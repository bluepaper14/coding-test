#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = -100000000;;
    int temp = 0;
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            cout << numbers[i] << numbers[j] << " ";
            temp = numbers[i] * numbers[j];
            if(temp > max) {
                max = temp;
            }
        }
    }
    return answer = max;
}