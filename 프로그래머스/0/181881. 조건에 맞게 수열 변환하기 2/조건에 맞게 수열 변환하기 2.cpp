#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int cnt = 0;
    
    while(true) {
        vector<int> temp;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 50 && arr[i] % 2 == 0)
                temp.push_back(arr[i] / 2);
            else if(arr[i] < 50 && arr[i] % 2 != 0)
                temp.push_back(arr[i] * 2 + 1); 
            else
                temp.push_back(arr[i]); 
        }
        
        if(arr == temp) { 
            return cnt;
        }
        
        arr = temp;
        cnt++;
    }
}