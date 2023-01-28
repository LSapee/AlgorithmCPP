// 피자 나눠 먹기(1)

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n>=7){
        n-=7;
        answer+=1;
    }
    if(n>0)
        answer+=1;

    return answer;
}