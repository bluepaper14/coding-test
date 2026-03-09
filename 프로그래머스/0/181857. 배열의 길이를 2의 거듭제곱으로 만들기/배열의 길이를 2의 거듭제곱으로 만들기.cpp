#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int n = arr.size();
    int target = 1;
    while (target < n) {
        target *= 2;
    }
    arr.resize(target, 0);

    return arr;
}