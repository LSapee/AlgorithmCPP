#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> P(51,vector<int>(0));
int ans[51];
void bfs(vector<vector<int>> arr,int n){
    fill(ans,ans+51,0);
    bool vis[51]; fill(vis,vis+51,false);
    queue<int> Q;
    Q.push(n);
    ans[n] = 0;
    vis[n] = true;
    int cnt =0;
    while(!Q.empty()){
        int k =Q.front(); Q.pop();
        for(int j=0; j<arr[k].size(); j++){
            int a= arr[k][j];
            if(vis[a]) continue;
            vis[a] =true;
            ans[a] = ans[k]+1;
            cnt = max(cnt,ans[a]);
            Q.push(a);
        }
    }
    P[cnt].push_back(n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    vector<vector<int>> arr(n+1,vector<int>(0));
    int x,y;
    while(cin>>x>>y){
        if(x==-1&&y==-1)break;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    for(int i=1; i<=n; i++)bfs(arr,i);
    for(int i=1; i<=n; i++)sort(P[i].begin(),P[i].end());
    for(int i=1; i<=50; i++){
        if(P[i].size()>0)cout<<i<<" "<<P[i].size()<<"\n";
        for(int j=0; j<P[i].size(); j++){
            cout<<P[i][j]<<" ";
        }
        if(P[i].size()) break;
    }
}