#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] ={2,1,-1,-2,-2,-1,1,2};

int arr[9][9];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,a1,b,b1; cin>>a>>a1>>b>>b1;
    if(a==b&&a1==b1){
        cout<<0;
        return 0;
    }
    queue<pair<int,int>> Q;
    Q.push({a,a1});

    while(!Q.empty()){
        pair<int,int> cur =Q.front(); Q.pop();
        for(int i=0; i<8; i++){
            int x = cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<1||x>8||y<1||y>8)continue;
            if(arr[x][y]!=0)continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<arr[b][b1];
}