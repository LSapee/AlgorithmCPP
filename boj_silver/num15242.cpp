#include <bits/stdc++.h>
#define X first
#define Y second

int dx[8] ={1,2,2,1,-1,-2,-2,-1};
int dy[8] ={2,1,-1,-2,-2,-1,1,2};
int arr[8][8];
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(arr[0],arr[8],-1);
    string st,ed;
    cin>>st>>ed;
    arr[st[0]-'a'][8-(st[1]-'0')] = 0;
    queue<pair<int,int>> Q;
    Q.push({st[0]-'a',8-(st[1]-'0')});

    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0;i<8; i++){
            int x =cur.X+dx[i];
            int y = cur.Y+dy[i];
            if(x<0||x>=8||y<0||y>=8)continue;
            if(arr[x][y]!=-1)continue;
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
    cout<<arr[ed[0]-'a'][8-(ed[1]-'0')];
}

