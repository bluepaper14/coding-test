#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int x = 0;
    int result = 0;
    vector<int> temp;
    
    for(int i = 1; i < food.size(); i++) {
        x = food[i]; //순회할 변수
        result = x / 2; //음식을 배치할 개수
        
        for(int j = 0; j < result; j++) {
            temp.push_back(i);
        }
    }
    
    vector<int> rtemp(temp.rbegin(), temp.rend());
    temp.push_back(0);
    for(int w = 0; w < rtemp.size(); w++) {
        temp.push_back(rtemp[w]);
    }
    
    for(int z = 0; z < temp.size(); z++) {
        answer += to_string(temp[z]);
    }

    return answer;
}
/*
1.0번을 제외한 나머지 벡터 배열을 순회해야함.
2.만약 2번에 있는 음식의 개수가 3개일때 나눠서 배치하려면 그의 몫이 되어야한다.
3.그렇다면 3 / 2 == 1이기 때문에 1번만큼 for문으로 반복해 임시 벡터에 삽입한다.
이를 반복순회하고 최종적으로 0을 삽입한다.
4.그리고 벡터를 뒤집어 이를 다시 answer에 삽입하면된다.
*/