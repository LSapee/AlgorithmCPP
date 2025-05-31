#include <bits/stdc++.h>

using namespace std;

int dx[4] ={0,1,0,-1};
int dy[4] = {1,0,-1,0};

int N,M,K;
int ans = INT_MAX;
int arr[11][1001][1001];
vector<string> mainMap;
struct Tmap{
    int f;
    int x;
    int y;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M>>K;
    for(int i=0; i<N; i++){
        string s;cin>>s;
        mainMap.push_back(s);
    }
    queue<Tmap> Q;
    arr[0][0][0] = 1;
    Q.push({0,0,0});
    while(!Q.empty()){
        Tmap cur = Q.front(); Q.pop();
        for(int i=0; i<4; i++){
            int x = cur.x+dx[i];
            int y = cur.y+dy[i];
            int nxtf = cur.f+1;
            if(x<0||x>=N||y<0||y>=M)continue;
            if(arr[cur.f][x][y]!=0)continue;
            if(mainMap[x][y]=='1'){
                if(nxtf>K)continue;
                if(arr[nxtf][x][y] == 0 || arr[nxtf][x][y]>arr[cur.f][cur.x][cur.y]+1){
                    arr[nxtf][x][y] = arr[cur.f][cur.x][cur.y]+1;
                    Q.push({nxtf,x,y});
                }
                continue;
            }
            arr[cur.f][x][y] = arr[cur.f][cur.x][cur.y]+1;
            Q.push({cur.f,x,y});
        }
    }
    for(int i=0; i<=K; i++){
        if(arr[i][N-1][M-1]!=0){
            if(ans==INT_MAX)ans= arr[i][N-1][M-1];
            else ans = min(ans,arr[i][N-1][M-1]);
        }
    }
    if(ans==INT_MAX)ans=-1;
    cout<<ans;
    return 0;
}