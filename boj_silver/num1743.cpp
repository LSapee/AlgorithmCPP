#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int arr[101][101];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;

    queue<pair<int,int>> Q;
    for(int i=0; i<k; i++){
        int a,b;
        cin>>a>>b;
        arr[a-1][b-1] = 1;
    }
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }

    int mx = INT_MIN;
    for(int i=0; i<n;i++){
        for(int j=0;j<m; j++){
            int count =0;
            if(arr[i][j]==1){
                arr[i][j]=0;
                Q.push({i,j});
                count++;
            }
            while(!Q.empty()){
                pair<int,int> cur = Q.front();Q.pop();
                for(int z=0; z<4; z++){
                    int x = cur.X+dx[z];
                    int y = cur.Y+dy[z];
                    if(x<0||x>=n||y<0||y>=m)continue;
                    if(arr[x][y]==0) continue;
                    count++;
                    arr[x][y] =0;
                    Q.push({x,y});
                }
            }
            mx = max(mx,count);
        }
    }
    cout<<mx;
}