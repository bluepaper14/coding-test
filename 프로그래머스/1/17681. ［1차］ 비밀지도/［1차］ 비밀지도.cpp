#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> bits; //10진수 -> 2진수로 변환하여 각 자리수를 삽입하는 벡터
    vector<int> bits2;
    string temp_value;
    
    for(int i = 0; i < arr1.size(); i++) {
        int A = arr1[i];
        int B = arr2[i];
        
        while (A > 0) { //한자리를 2로 나누어 2진수 형태로 넣고 삽입. 
            bits.push_back(A % 2);
            A /= 2;
        }
        
        while (B > 0) { //한자리를 2로 나누어 2진수 형태로 넣고 삽입. 
            bits2.push_back(B % 2);
            B /= 2;
        }
        
        
        if(bits.size() != n) {
            for(int i = bits.size(); i < n; i++) {
                bits.push_back(0);
            }
        }
        
        if(bits2.size() != n) {
            for(int j = bits2.size(); j < n; j++) {
                bits2.push_back(0);
            }
        }
        
        reverse(bits.begin(), bits.end()); //끝에서부터 저장되었으니 이를 뒤집는다.
        reverse(bits2.begin(), bits2.end());
        
  
            for(int x = 0; x < n; x++) {
                if(bits[x] == 1 || bits2[x] == 1) {
                    temp_value += "#";
                }
                else {
                    temp_value += " ";
                }
            }
        
        answer.push_back(temp_value);
        temp_value = "";
        bits.clear();
        bits2.clear();

}
    return answer;
}
/*
본 문제를 풀기 위해서 각 지도 1 2를 합쳐 먼저 #이 있는 부분을 찾을 필요가 있다. 
또한 10진수로 표현된 배열을 2진수로 바꿔 지도1 2가 1인 부분을 찾아내 임시 벡터안에 1을 채워둔다.
임시 벡터를 이용해 각 칸에 맞는 분기를 이용해 샵을 출력한다. 아니라면 공백을 출력한다.
*/