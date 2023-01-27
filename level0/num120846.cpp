// 합성수 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count =0;
    if(n ==1 || n==2){
        return answer;
    }
    for(int i=3; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
    }
    answer = count;
    return answer;
}
