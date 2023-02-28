#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};


using namespace std;

int arr[5][5];
int arr2[5][5];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(arr2[0],arr2[5], -1);
    int st1,st2;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                st1=i;
                st2=j;
            }
        }
    }
    int r,c;
    cin>>r>>c;
    queue<pair<int,int>> Q;
    Q.push({r,c});
    arr2[r][c] = 0;

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=5||y<0||y>=5)continue;
            if(arr2[x][y]!=-1 || arr[x][y]==-1)continue;
            arr2[x][y] = arr2[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }

    cout<<arr2[st1][st2];

}