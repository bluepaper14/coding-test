#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for(int i=0;i<query.size();i++){
        if(i % 2 == 0){ //값이 짝수일때(x) ->  인덱스의 서순?짝수일때
            arr.erase(arr.begin() + query[i] + 1, arr.end()); //query[i] 이후에 대한 배열 삭제.
            //arr.begin() => 0번인데 query[i]만큼 뒤로 이동..1을 더해 내 뒤사람으로 이동했음. 
        }else{
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
    }
    return arr;
}