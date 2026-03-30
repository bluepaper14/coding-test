#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> width; //가로 벡터
    vector<int> height; //세로 벡터
    for(int i = 0; i < sizes.size(); i++) {
    
        if(sizes[i][0] < sizes[i][1]) 
            swap(sizes[i][0], sizes[i][1]);
    }
    for(int j = 0; j < sizes.size(); j++) {
        int x = sizes[j][0]; 
        int y = sizes[j][1];
        width.push_back(x);
        height.push_back(y);
    }
    int width_val = *max_element(width.begin(), width.end());
    int height_val = *max_element(height.begin(), height.end());
    
    
    return answer = width_val * height_val;
}

/*
가로 세로의 길이를 큰 곳을 일정하게 맞춰주고 가장 긴 가로 길이 세로를 빼내면 된다.
*/