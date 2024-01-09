#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    while(n--){
        int k;cin>>k;
        priority_queue<ll,vector<ll>,greater<ll>> Q;
        for(int i=0; i<k; i++){
            int a;cin>>a;
            Q.push(a);
        }
        long long sum =0;
        while(Q.size()>1){
            ll o1 = Q.top();Q.pop();
            ll o2 = Q.top();Q.pop();
            sum+=o1+o2;
            Q.push(o1+o2);
        }
        cout<<sum<<"\n";
    }
}