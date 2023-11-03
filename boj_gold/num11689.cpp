#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n; cin>>n;
    ll ans = n;
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0){
            ans = ans - (ans/i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) ans=ans-ans/n;
    cout<<ans;
}