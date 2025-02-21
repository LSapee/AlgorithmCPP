#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    long long MOD = 1000000007;
    while(T--){
        int n;cin>>n;
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(int i=0; i<n; i++){
            long long hp; cin>>hp;
            pq.push(hp);
        }
        long long slime = 1;
        while(pq.size()>1){
            long long f = pq.top(); pq.pop();
            long long s = pq.top(); pq.pop();
            long long nxtSlimeHp = f*s;
            pq.push(nxtSlimeHp);
            slime = (slime * (nxtSlimeHp%MOD))%MOD;
        }
        cout<<slime<<"\n";

    }
    return 0;
}