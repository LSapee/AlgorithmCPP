#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;cin>>a>>b>>c;
    if(a+b==c) {cout<<a<<"+"<<b<<"="<<c; return 0;}
    if(a-b==c) {cout<<a<<"-"<<b<<"="<<c;return 0;}
    if(a*b==c) {cout<<a<<"*"<<b<<"="<<c;return 0;}
    if(a/b==c) {cout<<a<<"/"<<b<<"="<<c;return 0;}
    if(b+c==a) {cout<<a<<"="<<b<<"+"<<c;return 0;}
    if(b-c==a) {cout<<a<<"="<<b<<"-"<<c;return 0;}
    if(b*c==a) {cout<<a<<"="<<b<<"*"<<c;return 0;}
    if(b/c==a) {cout<<a<<"="<<b<<"/"<<c;return 0;}

}