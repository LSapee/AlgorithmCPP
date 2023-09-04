#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int c = min(a,b);
    a = max(a,b);
    b= c;
    while(1){
        if(a+1==b || a==b) break;
        if(a%2==1) a++;
        a/=2;
        if(b%2==1) b++;
        b/=2;
        answer++;
    }

    return answer;
}