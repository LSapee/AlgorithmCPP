#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    vector<int> nr(n+1,-1);
    int st,ed;cin>>st>>ed;
    vector<vector<int>> arr(n+1);
    int m;cin>>m;
    for(int i=0; i<m; i++){
        int k,kk;cin>>k>>kk;
        arr[k].push_back(kk);
        arr[kk].push_back(k);
    }
    nr[st]=0;
    queue<int> Q;
    Q.push(st);
    while(!Q.empty()){
        int my = Q.front(); Q.pop();
        for(int i=0; i<arr[my].size(); i++){
            int t = arr[my][i];
            if(nr[t]!=-1)continue;
            nr[t] = nr[my]+1;
            Q.push(t);
        }
    }
    cout<<nr[ed];

}
