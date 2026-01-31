#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

// 직접풀어볼 예정.
int dx[3] = {-1,-1,-1};
int dy[3] = {-1,0,1};

int T;

void input(){
    cin>>T;
}
void solve(){
    int N,C;
    cin>>N>>C;
    vector<string> silver;
    vector<bool> breakBlock(N,true);
    vector<vector<bool>> vis(N,vector<bool>(N,false));
    for(int i=0; i<N; i++){
        string temp; cin>>temp;
        silver.push_back(temp);
    }
    int curX = N-1;
    for(int i=0; i<N; i++){
        if(silver[curX][i]=='#')breakBlock[i] = false;
    }
    queue<pair<int,int>> Q;
    Q.push({N-1,C-1});
    vis[N-1][C-1]=true;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int i=0; i<3; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0 || y<0 || y>=N) continue;
            if(vis[x][y])continue;
            if(silver[x][y] == '.'){
                Q.push({x,y});
                vis[x][y] =true;
            }else{
                if(breakBlock[y]){
                    Q.push({x,y});
                    silver[x][y] = '.';
                    vis[x][y] =true;
                }
            }
        }
        if(!Q.empty() && Q.front().X<curX){
            curX = Q.front().X;
            for(int i=0; i<N; i++){
                if(!breakBlock[i])continue;
                if(silver[curX][i]=='#')breakBlock[i] = false;
            }
        }
    }
    string s = "";
    for(int i=0; i<N; i++){
        if(silver[0][i] =='.')s+="1";
        else s+="0";
    }
    cout<<s<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    input();
    while(T--){
        solve();
    }
    return 0;
}