//자릿수 더하기

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n>9){
        answer += n%10;
        n=int(n/10);
    }
    answer +=n;
    return answer;
}