#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;cin>>n;
    long long ans =0;
    for(long long i=1; i<=n-2; i++) ans += (i*i+i)/2;
    cout<<ans<<"\n";
    cout<<3;

    return 0;
}