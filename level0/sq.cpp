#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int n = 144;
    cout<<sqrt(n);
    if(sqrt(n)-(int)sqrt(n)>0){
        cout<<"제곱수가 아닙니다";
    }
    return 0;
}