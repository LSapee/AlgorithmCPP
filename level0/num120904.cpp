//숫자 찾기
#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int a =100000;
    while(a>0){
        if(num/a >0){
            break;
        }
        a= a/10;
    }
    int count =1;
    bool b = false;
    while(a>0){
        if(num/a==k){
            b = true;
            break;
        }
        num =num%a;
        a = a/10;
        count++;
    }
    if(b){
        answer =count;
    }else{
        answer = -1;
    }
    return answer;
}