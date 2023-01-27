//외계어 사전
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a =0;
    int b =0;
    for(int i=1;i<=n;i++ ){
        a=i;
        if(a%3==0){
            n++;
        }else{
            while(a>0){
                b= a%10;
                if(b==3){
                    n++;
                    break;
                }
                a =a/10;
            }
        }
    }
    return n;
}