#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;


int dx[4] ={1,0,-1,0};
int dy[4] = {0,1,0,-1};

int arr[1002][1002];

int main(){
    int n,m,tomato=0,count=0;
    queue<pair<int,int>> Q;
    cin>>m>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int k;
            cin>>k;
            arr[i][j] =k;
            if(k ==1 ){
                Q.push({i,j});
                tomato++;
            }
        }
    }
    while(!Q.empty()){
        if(tomato ==0) {
            tomato = Q.size();
            count++;
        }
        pair<int,int> cur = Q.front(); Q.pop();
        tomato--;
        for(int i=0; i<4; i++){
            int x = cur.X + dx[i];
            int y = cur.Y + dy[i];
            if(x<0 || x>=n ||y<0 ||y>=m) continue;
            if(arr[x][y]==-1 || arr[x][y] ==1)continue;
            arr[x][y] =1;
            Q.push({x,y});
        }

    }
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(arr[i][j]==0){
                count=-1;
            }
        }
    }
    cout<<count;
    return 0;
}

//num7569 토마토도 풀어보기 3차원 STL tuple 이용하면 좋을 것 같다.