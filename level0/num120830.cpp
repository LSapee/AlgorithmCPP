//양꼬치
#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int a = n/10;
    k-=a;
    answer = n*12000+k*2000;
    return answer;
}