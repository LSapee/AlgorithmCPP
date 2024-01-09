#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    // 1. 1에서 가장 먼 곳 (젤 먼 거리가 3이면 거리가 3인 헛간이 많으면 젤 번호가 작은 헛간)
    // 2. 가장 먼 헛간까지의 거리
    // 3. 가장 먼 헛간의 갯수
    vector<vector<int>> arr(n+1,vector<int>(0));
    int vis[n+1];
    fill(vis,vis+n+1,-1);
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    queue<int> Q;
    Q.push(1);
    vis[1] =0;
    int ans2 =0;
    while(!Q.empty()){
        int k = Q.front();Q.pop();
        for(int i=0; i<arr[k].size(); i++){
            int x = arr[k][i];
            if(vis[x]!=-1)continue;
            vis[x]= vis[k]+1;
            ans2 = max(ans2,vis[x]);
            Q.push(x);
        }
    }
    int ans1=0;
    int ans3 =0;
    for(int i=1; i<=n; i++){
        if(vis[i]==ans2&&ans1==0)ans1=i;
        if(vis[i]==ans2)ans3++;
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3;
}