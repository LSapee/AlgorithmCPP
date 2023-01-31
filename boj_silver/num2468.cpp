#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};


int arr2[103][103];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    int arr[101][101];
    int mx=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            mx = max(mx,arr[i][j]);
        }
    }
    mx++;
    int big=0;
    while(mx--){
        fill(arr2[0],arr2[101]+101,-1);
        int count =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                queue<pair<int,int>> Q;
                if(arr[i][j]>mx && arr2[i][j]!=1){
                    count++;
                    Q.push({i,j});
                    arr2[i][j] = 1;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int z=0; z<4; z++){
                        int x = cur.X+dx[z];
                        int y = cur.Y+dy[z];
                        if(x<0||x>=n||y<0||y>=n)continue;
                        if(arr[x][y]<=mx || arr2[x][y]==1)continue;
                        Q.push({x,y});
                        arr2[x][y] = 1;
                    }
                }
            }
        }
        big = max(big,count);
    }
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cout<<arr2[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    cout<<big;
    return 0;
}

