#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[5][5];
int a,b;
int bfs(int target){
    int t[5][5];
    fill(t[0],t[5],-1);
    t[a][b]=0;
    queue<pair<int,int>> Q;
    Q.push({a,b});
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0;i<4; i++){
            int x = dx[i] +cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=5||y<0||y>=5)continue;
            if(arr[x][y]==-1||t[x][y]!=-1)continue;
            t[x][y]= t[cur.X][cur.Y]+1;
            if(arr[x][y]==target){
                a=x;
                b=y;
                return t[x][y];
            }
            Q.push({x,y});
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
        }
    }
    cin>>a>>b;
    int target= 1;
    int sum = 0;
    while(target<=6){
        int k = bfs(target);
        if(k==-1){
            sum = -1; break;
        }
        sum +=k;
        target++;
    }
    cout<<sum;
    return 0;

}