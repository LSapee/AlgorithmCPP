#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {-2,2,3,3,2,-2,-3,-3};
int dy[8] = {3,3,2,-2,-3,-3,-2,2};

int vis[10][9];
int a,b,a1,b1;
bool obj(int k,int x, int y){
    switch(k){
        case 0:
            if(x==a1&&b1==y+1) return true;
            if(x-1==a1&&b1==y+2) return true;
            break;
        case 1:
            if(x==a1&&b1==y+1) return true;
            if(x+1==a1&&b1==y+2) return true;
            break;
        case 2:
            if(x+1==a1&&b1==y) return true;
            if(x+2==a1&&b1==y+1) return true;
            break;
        case 3:
            if(x+1==a1&&b1==y) return true;
            if(x+2==a1&&b1==y-1) return true;
            break;
        case 4:
            if(x==a1&&b1==y-1) return true;
            if(x+1==a1&&b1==y-2) return true;
            break;
        case 5:
            if(x==a1&&b1==y-1) return true;
            if(x-1==a1&&b1==y-2) return true;
            break;
        case 6:
            if(x-1==a1&&b1==y) return true;
            if(x-2==a1&&b1==y-1) return true;
            break;
        default:
            if(x-1==a1&&b1==y) return true;
            if(x-2==a1&&b1==y+1) return true;
    }
    return false;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fill(vis[0],vis[10],-1);
    cin>>a>>b>>a1>>b1;
    queue<pair<int,int>> Q;
    Q.push({a,b});
    vis[a][b] =0;
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<8; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=10||y<0||y>=9)continue;
            if(vis[x][y]!=-1)continue;
            bool check = false;
            check = obj(i,cur.X,cur.Y);
            if(check)continue;
            vis[x][y] = vis[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<vis[a1][b1];

}