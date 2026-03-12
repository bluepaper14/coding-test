#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<int> temp; 
    
    for(int i = 0; i < rank.size(); i++) {
        if(attendance[i] == true) {
            temp.push_back(i); 
        }
    }
    sort(temp.begin(), temp.end(), [&](int a, int b) {
        return rank[a] < rank[b]; 
    });
    int a = temp[0];
    int b = temp[1];
    int c = temp[2];

    return (10000 * a) + (100 * b) + c;
}