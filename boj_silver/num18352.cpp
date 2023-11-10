#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

bool vis[300005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //n = 도시 개수
    //m = 단방향 도로 개수
    //k = x에서 목적지 까지의 거리 길이
    //x = 출발 도시
    int n,m,k,x;cin>>n>>m>>k>>x;
    //1~n번까지
    vector<vector<int>> city(n+1);
    vector<int> ans;
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        // 단방향 a>b로 가는 길만
        city[a].push_back(b);
    }
    queue<pair<int,int>> Q;
    Q.push({x,0});
    vis[x] =true;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<city[cur.X].size(); i++){
            int node = cur.Y+1;
            if(vis[city[cur.X][i]]||node>k)continue;
            if(node== k) ans.push_back(city[cur.X][i]);
            vis[city[cur.X][i]] = true;
            Q.push({city[cur.X][i],node});
        }
    }
    if(ans.size()==0) cout<<-1;
    else{
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<"\n";
    }
}