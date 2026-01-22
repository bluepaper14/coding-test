#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int x = 0;
    for(int i = 0; i < included.size(); i++) {
        x = a + i * d; //등차수열 생성
        if(included[i] == true) //true만 answer에 더함.
            answer += x;
        
    }
    return answer;
}
//배열 included에 대한 크기로 for문으로 만들고 
//등차수열을 더해가면 if문으로 bool을 확인하여 더한다.