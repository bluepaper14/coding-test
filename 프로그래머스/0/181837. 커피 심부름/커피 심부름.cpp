#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int cnta = 0; //아메리카노
    int cntb = 0; //라페라때
    
    for(string x : order) {
        if(x.find("americano") != string::npos)
            cnta++;
        if(x.find("anything") != string::npos)
            cnta++;
        if(x.find("cafelatte") != string::npos)
            cntb++;
    }
    answer = cnta * 4500 + cntb * 5000;
    return answer;
}