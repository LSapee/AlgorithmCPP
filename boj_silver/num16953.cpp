#include <bits/stdc++.h>
#define X first
#define Y second
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;
    cin>>n>>m;

    queue<pair<ll,ll>> Q;
    Q.push({n,1});

    while(!Q.empty()){
        pair<ll,ll> cur = Q.front(); Q.pop();
        ll x = cur.X;
        for(ll k : {x*2,x*10+1}){
            if(k>1000000000)continue;
            if(k>m)continue;
            if(k==m){
                cout<< cur.Y+1;
                return 0;
            }
            Q.push({k,cur.Y+1});
        }
    }
    cout<<-1;
}
