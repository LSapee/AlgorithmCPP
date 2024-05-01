#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[5][5];
bool vis[5][5];
bool ans = false;

void dfs(pair<int,int> rc,int apple,int cnt){
    if(cnt==3){
        if(apple>=2)ans = true;
        return ;
    }
    if(ans) return ;
    for(int i=0; i<4; i++){
        int x = rc.X+dx[i];
        int y = rc.Y+dy[i];
        if(x<0||x>=5||y<0||y>=5)continue;
        if(arr[x][y]==-1||vis[x][y])continue;
        rc.X+=dx[i];
        rc.Y+=dy[i];
        vis[x][y] =true;
        if(arr[rc.X][rc.Y]==1)dfs(rc,apple+1,cnt+1);
        else dfs(rc,apple,cnt+1);
        rc.X-=dx[i];
        rc.Y-=dy[i];
        vis[x][y] = false;
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            cin>>arr[i][j];
    pair<int,int> rc;
    cin>>rc.X>>rc.Y;
    int apple =0;
    vis[rc.X][rc.Y]=true;
    if(arr[rc.X][rc.Y]==1)apple++;
    dfs(rc,apple,0);
    if(ans)cout<<1;
    else cout<<0;

}