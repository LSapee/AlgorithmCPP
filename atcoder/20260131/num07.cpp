#include <bits/stdc++.h>
using namespace std;

int T;
//T<=30만
// N,M <= 10억 공식이 있을듯.
void input(){
    cin>>T;
}
void solve(){
    long long N,M,A,B;cin>>N>>M>>A>>B;
    long long ans =0;
    for(long long i=0; i<=N; i++){
        long long temp = ((A*i)+B)%M;
        if(temp>i)ans++;
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    while(T--)solve();
    return 0;
}