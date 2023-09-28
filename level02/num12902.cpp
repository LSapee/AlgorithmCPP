#include <string>
#include <vector>

using namespace std;
long long arr[5005];
int solution(int n) {
    int answer = 0;
    arr[2] = 3;
    arr[4] = 11;
    arr[6] = 41;
    for(int i=8; i<=n; i+=2){
        arr[i] = ((arr[i-2]*4)%1000000007-(arr[i-4])%1000000007+1000000007)%1000000007;
    }
    answer = arr[n];
    return answer;
}