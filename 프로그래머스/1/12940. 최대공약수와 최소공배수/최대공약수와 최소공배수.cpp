#include <vector>
#include <algorithm> 

using namespace std;

vector<int> solution(int n, int m) {
    int gcd = 1;
    int limit = min(n, m); 
    for(int i = 1; i <= limit; i++) {
        if(n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }
    int lcm = (n * m) / gcd;
    
    return {gcd, lcm};
}