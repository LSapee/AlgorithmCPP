// k의 개수

#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int a,count;
    count =0;

    for(int b=i;b<=j;++b){
        a=b;
        while(a>0){
            if(a%10==k){
                count++;
            }
            a=a/10;
        }
    }
    return count;
}