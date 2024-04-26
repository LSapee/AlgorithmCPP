#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> vis;
/*
 * vector<int> vis; vis.resize(n+1,-1); -> resize() 하면서 의도치 않은 데이터 손실 발생 가능성 있음
 * int vis[101] fill(vis,vis+n+1,-1)차이점 알아보기
 * */
vector<vector<int>> netWork;

bool isBigWorld = false;
void bfs(int st){
    fill(vis.begin(),vis.end(),-1);
    queue<int> Q;
    Q.push(st);
    vis[st] =0;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        for(int i=0; i<netWork[cur].size(); i++){
            int x = netWork[cur][i];
            if(vis[x]!=-1)continue;
            vis[x]= vis[cur]+1;
            Q.push(x);
        }
    }
    for(int i=1; i<=n; i++){
        if(vis[i]==-1||vis[i]>6)isBigWorld=true;
    }
    return ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    vis.resize(n+1,-1);
    for(int i=0; i<=n; i++){
        vector<int> temp;
        netWork.push_back(temp);
    }
    for(int i=0; i<m; i++){
        int a,b;cin>>a>>b;
        netWork[a].push_back(b);
        netWork[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        bfs(i);
        if(isBigWorld){
            cout<<"Big World!";
            return 0;
        }
    }
    cout<<"Small World!";

}
