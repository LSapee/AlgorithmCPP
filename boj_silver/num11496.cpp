#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

bool vis[1001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;cin>>a>>b;
    int n,m;cin>>n>>m;
    if(a==b){
        cout<<0;
        return 0;
    }
    vector<vector<int>> arr(n+1,vector<int>(0));
    for(int i=0; i<m; i++){
        int z,x;cin>>z>>x;
        arr[z].push_back(x);
        arr[x].push_back(z);
    }
    queue<pair<int,int>> Q;
    Q.push({a,0});
    int cnt =INT_MAX;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<arr[cur.X].size(); i++){
            int x = arr[cur.X][i];
            int y = cur.Y+1;
            if(vis[x])continue;
            vis[x] =true;
            Q.push({x,y});
            if(x==b) cnt= min(cnt,y);
        }
    }
    if(cnt==INT_MAX) cout<<-1;
    else cout<<cnt;
//    for(int i=0; i<=n; i++){
//        cout<<i<<"번째 : ";
//        for(int j=0; j<arr[i].size(); j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
}

