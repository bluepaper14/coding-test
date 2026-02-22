#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (int i = 0; i < queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        reverse(my_string.begin() + s, my_string.begin() + e + 1);
    }
    return my_string;
}

/* 특정 범위 내의 문자열을 뒤집어야한다.
algorithm의 reverse(s.begin(), s.end()) 를 활용하자
*/