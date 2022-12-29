#include <bits/stdc++.h>
using namespace std;

int main(){

    int a ,b,n;
    a= 3;
    b=2;
    n=10;
    int count =0;
    int c =0;
    while(n>=a){
    c = n/a;
    count += c*b;
    n=(n%a) + (b*c);
    }
    cout<<count;
    return 0;
}
