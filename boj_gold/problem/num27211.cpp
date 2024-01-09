#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>> arr;
    int n,m;cin>>n>>m;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<m;j++){
            int a; cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    queue<pair<int,int>> Q;
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==1)continue;
            if(arr[i][j]==0){
                Q.push({i,j});
                arr[i][j] =1;
                cnt++;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x = dx[z]+cur.X;
                    int y = dy[z] +cur.Y;
                    if(x==n) x=0;
                    if(x==-1) x=n-1;
                    if(y==m) y=0;
                    if(y==-1) y=m-1;
                    if(arr[x][y]==1)continue;
                    arr[x][y] = 1;
                    Q.push({x,y});
                }
            }
        }
    }
    cout<<cnt;

}
