#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int x = 0;
    int y = 0;
    if(arr1.size() > arr2.size()) {
        return 1;
    }
    else if(arr1.size() < arr2.size()) {
        return -1;
    }
    else {
    for(int i = 0; i < arr1.size(); i++) 
        x += arr1[i];
    for(int j = 0; j < arr2.size(); j++)
        y += arr2[j];
    if(x > y)
        return 1;
    else if(x == y)
        return 0;
    else
        return -1;
    }
    return answer;
}