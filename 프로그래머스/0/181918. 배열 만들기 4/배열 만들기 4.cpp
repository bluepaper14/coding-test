#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;

    while (i < arr.size()) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
            i++;
        } 
        else if (stk.back() < arr[i]) {
            stk.push_back(arr[i]);
            i++;
        } 
        else {
            stk.pop_back();
        }
    }
    
    return stk;
}

/*
1.stk에 넣을거다. 
2.stk가 비어 있다면 무조건 넣는다.
3.stk의 이전에 넣었던 숫자가보다 지금 넣는 숫자가 크다면? 넣는다.
4.stk의 이전에 넣었더 숫자가 보다 지금 넣는 수자가 작거나 같다면?
*/