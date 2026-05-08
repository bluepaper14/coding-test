#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string temp = to_string(num);
    char x = k + '0';

    for(int i = 0; i < temp.length(); i++) {
        if(temp[i] == x) {
            return i + 1; 
        }
    }
    return -1;
}