#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sum=0,a=1;
    cin>>n;

    while(n>10){
        n%10*a >=5*a ? n+=(10*a)-(n%(10*a)) : n-=n%(10*a);
        a*=10;
    }
    cout<<sum;
}