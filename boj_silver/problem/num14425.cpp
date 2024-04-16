#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,int> S;
    int n,m;cin>>n>>m;
    for(int i=0; i<n; i++) {
        string s;cin>>s;
        S[s] = 100000;
    }
    int cnt =0;
    for(int i=0; i<m; i++){
        string s; cin>>s;
        if(S[s]==100000)cnt++;
    }
    cout<<cnt;

}