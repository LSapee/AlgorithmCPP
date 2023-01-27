// 유한소수 판별하기
#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

int solution(int a, int b) {
    int answer =0;
    int k = gcd(a,b);
    a= a/k;
    b= b/k;
    while(b%2==0||b%5==0){
        if(b%2==0){
            b= b/2;
        }else{
            b=b/5;
        }
    }
    if(b==1){
        answer= 1;
    }else{
        answer =2;
    }
    return answer;
}
