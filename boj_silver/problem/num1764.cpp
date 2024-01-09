#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n,m;cin>>n>>m;
    vector<string> ans;
    set<string> s;
    for(int i=0; i<n; i++){
        string ss;cin>>ss;
        s.insert(ss);
    }
    for(int i=0; i<m; i++){
        string ss;cin>>ss;
        if(s.find(ss)!=s.end()) ans.push_back(ss);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto a : ans)cout<<a<<"\n";

}

