#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> counts(31, 0);
    
    for(const string& s : strArr) {
        counts[s.length()]++;
    }
    
    int answer = *max_element(counts.begin(), counts.end());
    return answer;
}