#include <bits/stdc++.h>
using namespace std;

int N,C;

int arr[100003];
int vis[100003];
int RedOrBlue[100003];
void bfs(){
    queue<int> Q;
    Q.push(0);
    vis[0]=0;
    while(!Q.empty()){
        int cur = Q.front();Q.pop();
        //현재 위치에서 포탈있는경우
        if(arr[cur]!=0){
            //빨간 포탈
            if(RedOrBlue[cur]==0){
                //무조건 이동하지만 이미 방문한 곳 도착한 적 없으면 이동 및 Q추가
                if(vis[arr[cur]]==-1){
                    vis[arr[cur]]=vis[cur];
                    Q.push(arr[cur]);
                    // 방문할 곳이 기존에 방문했던 것보다 빨리 가능하다면 추가
                }else if(vis[arr[cur]]>vis[cur]){
                    vis[arr[cur]] = vis[cur];
                    Q.push(arr[cur]);
                }
                continue;
                // 파란 포탈의 경우
            }else{
                int y = arr[cur];
                // 방문한적 없다면 순간이동
                if(vis[y]==-1){
                    vis[y]=vis[cur];
                    Q.push(y);
                    // 방문한적 있을때 방문할곳이 현재 보다 크면 순간이동
                }else if(vis[y]>vis[cur]){
                    vis[y]=vis[cur];
                    Q.push(y);
                }
            }
        }
        int x= cur+1;
        if(x>=N)continue;
        // 도착할 곳 방문한적 없거나 이미 방문했는데 지금보다 더 큰수일 경우. 변경
        if(vis[x]==-1 || vis[x]>vis[cur]){
            vis[x]= vis[cur]+1;
            Q.push(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    cin>>N>>C;
    fill(vis,vis+100003,-1);
    // 레드인지 블루인지 확인 필요 0=red 1= blue
    for(int i=0; i<C;i++){
        int br,a,b;cin>>br>>a>>b;
        if(a==N-1)continue;
        RedOrBlue[a]=br;
        arr[a]=b;
    }
    bfs();
    cout<<vis[N-1];
    return 0;
}