#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.rbegin(), score.rend());
    
    int val = score.size() / m; //몇 묶음인지 파악?
    vector<int> temp; //임시벡터 생성
    for(int i = m - 1; i < score.size(); i += m) { //정렬의 값중 가장 작은 값은 끝자리 이기 때문에 m - 1이다. 
        //이를 i += m으로 하여 증감. 묶음이 넘어가지 않을정도만.
        answer += (score[i] * m);
    }
    return answer;
}

/*
1점 ~ k점 사과 점수
m개씩 담아 한상자. 
상자에 담긴 사과중 가장 낮은 사과 점수를 p라고 가정.
상자의 가격은 p * m

많은 사과를 팔았을때 최대 이익은?


1.먼저 핵심은 최대 이익의 가격을 내기 위해서는 정렬을 사용해 점수가 높은 사과끼리 묶을 필요가 있다.
2.그리고 묶의 개수를 알고 있으니 이를 사용해서 임시 벡터 배열을 만들고 더하면 된다.
*/