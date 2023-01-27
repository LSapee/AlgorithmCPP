//삼각형의 완성조건(2)
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int a,b,c;
    a= max(sides[0],sides[1]);
    b= min(sides[0],sides[1]);
    c= a-b;

    int answer = b-c-1+a;
    return answer;
}