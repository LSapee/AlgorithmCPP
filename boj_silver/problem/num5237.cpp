#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &arr, vector<int> &vis){
    queue<int> Q;
    Q.push(0);
    vis[0]=1;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        for(int z=0; z<arr[cur].size(); z++){
            int x = arr[cur][z];
            if(vis[x]!=-1)continue;
            Q.push(x);
            vis[x]=1;
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        int n,m;cin>>n>>m;
        string s="Connected.\n";
        vector<int> vis(n,-1);
        vector<vector<int>> arr(n);
        for(int i=0; i<m; i++){
            int a,b;cin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        bfs(arr,vis);
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==-1){
                s="Not connected.\n";
                break;
            }
        }
        cout<<s;
    }
}