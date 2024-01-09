#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    map<string,string> mp;
    int n,m;cin>>n>>m;
    for(int i=0; i<n; i++){
        string s,ss;cin>>s>>ss;
        mp[s]=ss;
    }
    for(int i=0; i<m; i++){
        string s;cin>>s;
        cout<<mp[s]<<"\n";
    }
}