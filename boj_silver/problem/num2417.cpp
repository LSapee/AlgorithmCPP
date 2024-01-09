#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin>>n;
    ll k = sqrt(n);
    if((k*k)<n)k++;
    cout<<k;
}
