//제곱수 판별하기
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 1;
    if(sqrt(n)-(int)sqrt(n)>0){
        answer = 2;
    }
    return answer;
}