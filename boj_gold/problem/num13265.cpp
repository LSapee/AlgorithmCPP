#include <bits/stdc++.h>
using namespace std;

int T;
int const RED = 1;
int const BLUE = 2;

int n,m;
int vis[1001];
vector<vector<int>> line;

bool bfs(){
    fill(vis,vis+1001,0);
    int nxtColor = BLUE;
    for(int z= 1; z<=n; z++){
        if(vis[z]!=0)continue;
        queue<int> Q;
        Q.push(z);
        vis[z] = RED;
        while(!Q.empty()){
            int num = Q.front();Q.pop();
            int myColor = vis[num];
            if(myColor==RED) nxtColor = BLUE;
            else nxtColor =RED;
            for(int i=0; i<line[num].size(); i++){
                int x = line[num][i];
                if(vis[x]==myColor) return false;
                if(vis[x]==nxtColor) continue;
                vis[x] = nxtColor;
                Q.push(x);
            }
        }
    }
    return true;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        cin>>n>>m;
        line.resize(n+1);
        for(int i=0; i<m; i++){
            int a,b;cin>>a>>b;
            line[a].push_back(b);
            line[b].push_back(a);
        }
        bool ok =bfs();
        if(ok)cout<<"possible\n";
        else cout<<"impossible\n";
        line.clear();
    }

}