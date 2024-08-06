#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] ={1,0,-1,0};

int n;
int ans = INT_MAX;
// 섬 번호 구분해주기
void paintBfs(int a,int b,int islandNumber,vector<vector<int>> &arr){
    queue<pair<int,int>> Q;
    Q.push({a,b});
    arr[a][b] = islandNumber;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0; i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]!=1)continue;
            arr[x][y] = islandNumber;
            Q.push({x,y});
        }
    }
}
// 섬 -> 섬까지의 거리 측정
void Bfs(int a,int b,int fColor,vector<vector<int>> arr){
    queue<pair<int,int>> Q;
    Q.push({a,b});
    arr[a][b] = 1;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();Q.pop();
        for(int i=0;i<4; i++){
            int x = dx[i]+cur.X;
            int y = dy[i]+cur.Y;
            if(x<0||x>=n||y<0||y>=n)continue;
            if(arr[x][y]>0)continue;
            if(arr[x][y]<0){
                if(arr[x][y]==fColor)continue;
                else if(arr[cur.X][cur.Y]<ans){
                    ans = arr[cur.X][cur.Y];
                    return ;
                }
            }
            arr[x][y] = arr[cur.X][cur.Y]+1;
            Q.push({x,y});
        }
    }
}
// 바다 주변에 +안에 섬이 있는지 확인 및 섬 번호 반한
int check(int a,int b, vector<vector<int>> arr){
    for(int i=0; i<4; i++){
        int x= dx[i]+a;
        int y = dy[i]+b;
        if(x<0||x>=n||y<0||y>=n)continue;
        if(arr[x][y]<0)return arr[x][y];
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<vector<int>> arr;
    //입력 배열 받기
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            int a;cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    int islandNumber = -1;// 섬표시 -1~-x으로 표시
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==1){
                paintBfs(i,j,islandNumber,arr);
                islandNumber--;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            if(arr[i][j]==0){
                int fColor = check(i,j,arr);
                if(fColor!=0) Bfs(i,j,fColor,arr);
            }
        }
    }
    cout<<ans;
    return 0;
}

