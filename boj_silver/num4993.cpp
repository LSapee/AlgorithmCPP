#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

using namespace std;
int arr[21][21];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    while(cin>>m>>n){
        if(n==0 && m==0)break;
        string ss[n];
        fill(arr[0],arr[21],-1);
        for(int i =0; i<n; i++){
            string s;cin>>s;
            ss[i] = s;
        }
        int count =1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                queue<pair<int,int>> Q;
                if(ss[i][j] =='@'){
                    Q.push({i,j});
                    ss[i][j]='#';
                    arr[i][j] = 1;
                }
                while(!Q.empty()){
                    pair<int,int> cur =Q.front(); Q.pop();
                    for(int z=0; z<4; z++){
                        int x = cur.X+dx[z];
                        int y = cur.Y+dy[z];
                        if(x<0||x>=n||y<0||y>=m)continue;
                        if(ss[x][y]=='#'||arr[x][y]!=-1 )continue;
                        arr[x][y] = arr[cur.X][cur.Y] +1;
                        ss[x][y] ='#';
                        count++;
                        Q.push({x,y});
                    }
                }
            }
        }
        cout<<count<<"\n";
    }



}