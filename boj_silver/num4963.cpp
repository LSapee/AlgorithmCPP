#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m){
        if(n ==0 && m==0)
            break;
        int arr[m][n];
//        기본 배열 초기화
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

//      섬탐색을 위한 큐
        queue<pair<int,int>> Q;
        int count =0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[i][j]==1){
                    Q.push({i,j});
                    arr[i][j] =0;
                    count++;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int k=0; k<8; k++){
                        int x = cur.X+dx[k];
                        int y = cur.Y+dy[k];
                        if(x<0|| x>=m || y<0  || y>= n)continue;
                        if(arr[x][y]==0)continue;
                        arr[x][y] = 0;
                        Q.push({x,y});
                    }
                }
            }
        }
        cout<<count<<"\n";

    }



    return 0;
}