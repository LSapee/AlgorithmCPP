//삼각형의 완성조건(1)

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int sum =0;
    int mx =0;
    for (int a : sides){
        if (a>mx){
            mx = a;
        }
        sum +=a;
    }
    sum -=mx*2;
    if (sum>0)
        answer =1;
    else
        answer =2;
    return answer;
}