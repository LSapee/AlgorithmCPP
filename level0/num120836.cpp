//순서쌍의 개수
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=n; i>0; i--){
        if(n%i==0){
            answer++;
        }
    }
    return answer;
}
