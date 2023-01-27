#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int arr[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    string s;
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> J;
    queue<pair<int,int>> F;
    for(int i=0; i<n; i++){
        cin>>s;
        for(int j=0; j<s.size(); j++){
            if(s[j]=='#'){
                arr[i][j] = -1;
            }
            if(s[j]=='.'){
                arr[i][j] =0;
            }
            if(s[j]=='J'){
                arr[i][j] = 1001;
                J.push({i,j});
                continue;
            }
            if(s[j]=='F'){
                arr[i][j] =0;
                F.push({i,j});
                continue;
            }
        }
    }
    while(!F.empty()){
        pair<int,int> cur = F.front(); F.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0 || x>=n || y<0 || y>=m) continue;
            if(arr[x][y] == -1 || arr[x][y] != 0) continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            F.push({x,y});
        }
    }
    arr[J.front().X][J.front().Y] = 0;

    while(!J.empty()){
        pair<int,int> cur = J.front(); J.pop();
        for(int i=0; i<4; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0 || x>=n || y<0 || y>=m){
                cout<<arr[cur.X][cur.Y]+1;
                return 0;
            }
            if(arr[x][y] == -1) continue;
            int a = arr[cur.X][cur.Y]+1;
            if(arr[x][y]>a ||arr[x][y]==0){
                J.push({x,y});
                arr[x][y] = a;
            }
        }
    }

//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    cout<<"IMPOSSIBLE";


    return 0;
}

//상호작용이 필요할땐 18809 백트래킹 필요