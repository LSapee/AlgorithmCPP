//배열의 평균값

#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    while(n>=slice){
        n=n-slice;
        answer+=1;
    }
    if(n>0)
        answer+=1;
    return answer;
}

