#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    vector<string> arr;
    
    for(int i = 0; i < my_string.length(); i++) {
        string temp = "";
        for(int j = 0; j <= i; j++) {
            temp += my_string[j];
        }
        arr.push_back(temp);
    }
    for(int x = 0; x < arr.size(); x++) {
        if(arr[x] == is_prefix)
            return answer = 1;
        else
            answer = 0;
    }
    return answer;
}