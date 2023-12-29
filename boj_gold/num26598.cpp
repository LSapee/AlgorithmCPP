#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n,m;
vector<string> arr;
bool vis[1001][1001];

bool check(int st,int st2,int h,int w){
    int t = h*w;
    int cnt =1;
    queue<pair<int,int>> Q;
    Q.push({st,st2});
    vis[st][st2]= true;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(vis[x][y]||arr[x][y]!=arr[cur.X][cur.Y])continue;
            cnt++;
            Q.push({x,y});
            vis[x][y]= true;
        }
    }
    if(cnt==t)return true;
    return false;
}
int width(int st,int h){
    for(int i=st+1; i<m; i++)if(arr[h][i]!=arr[h][st]) return i-st;
    return m-st;
}
int height(int st,int w){
    for(int i= st+1; i<n; i++) if(arr[i][w]!=arr[st][w]) return i-st;
    return n-st;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0 ;i<n; i++){
        string s;cin>>s;
        arr.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j]){
                vis[i][j] = true;
                int w = width(j,i);
                int h = height(i,j);
                bool ok = check(i,j,h,w);
                if(!ok) {
                    cout<<"BaboBabo";
                    return 0;
                }
            }
        }
    }
    cout<<"dd";

}