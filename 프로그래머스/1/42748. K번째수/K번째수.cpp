#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for(int i = 0; i < commands.size(); i++) {
        int q = commands[i][0];
        int w = commands[i][1];
        int e = commands[i][2];
        for(int j = q - 1; j < w; j++) {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        for(int x : temp) {
            cout << x << " ";
        }
        answer.push_back(temp[e - 1]);
        temp.clear();
    }
    return answer;
}