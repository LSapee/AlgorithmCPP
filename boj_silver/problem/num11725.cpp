#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int root = 1;
    vector<vector<int>> tree(n+1);
    for(int i=1; i<n; i++){
        int p,c; cin>>p>>c;
        tree[p].push_back(c);
        tree[c].push_back(p);
    }
    int P[n+1]; for(int i=1; i<=n; i++) P[i] =0;
    queue<int> Q;
    Q.push(root);
    P[root] =0;
    while(!Q.empty()){
        int cur = Q.front(); Q.pop();
        for(auto nxt : tree[cur]){
            if(nxt==0 || nxt==P[cur]) continue;
            P[nxt] = cur;
            Q.push(nxt);
        }
    }
    for(int i=2; i<=n; i++) cout<<P[i]<<"\n";
}