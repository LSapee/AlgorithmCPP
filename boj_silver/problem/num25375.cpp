#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int Q; cin>>Q;
    while(Q--){
        ll a,b;cin>>a>>b;
        //a = gcd(x,y) 최대공약수
        //b = x+y b>a?
        if(b%a==0 && b>a)cout<<1<<"\n";
        else cout<<0<<"\n";
    }
}