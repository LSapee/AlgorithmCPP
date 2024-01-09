#include <bits/stdc++.h>
using namespace std;

bool vis[502];
int cnt[502];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,ans=0;cin>>n>>m;
    vector<vector<int>> arr(n+1,vector<int>(0));
    for(int i=0; i<m; i++){
        int x,y;cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    queue<int> Q;
    Q.push(1);
    vis[1] = true;
    while(!Q.empty()){
        int k = Q.front();Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            int a =arr[k][i];
            if(vis[a])continue;
            Q.push(a);
            vis[a]= true;
            cnt[a] = cnt[k]+1;
            if(cnt[a]<3)ans++;
        }
    }
    cout<<ans;
}