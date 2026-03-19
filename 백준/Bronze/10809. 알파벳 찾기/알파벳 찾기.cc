#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> arr(26, -1);

    string line;
    cin >> line;

    for(int i = 0; i < line.length(); i++) {
        char current_char = line[i]; //현재 문자.
        int index = current_char - 'a';
        if(arr[index] == -1) {
            arr[index] = i;
        }
    }

    for(int x : arr) {
        cout << x << " ";
    }
}