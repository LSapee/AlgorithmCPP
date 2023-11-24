#include <bits/stdc++.h>
using namespace std;

int n,m;
// 그래프가 1부터 시작하기에 최대범위는 1000까지 해서 1001칸
int arr[1001][1001];
bool vis[1001];
int k =INT_MAX;
void dfs(int a,int b,int c){
    if(a==b){
        k = min(k,c);
        return ;
    }
    vis[a] = true;
    for(int i=1; i<=n; i++){
        if(a==i||vis[i])continue;
        if(arr[a][i]!=0){
            dfs(i,b,c+arr[a][i]);
        }
        vis[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
//    공간 복잡도를 줄이기 위해서는 아래 처럼 선언 하면된다.
//    int arr[n+1][n+1];
    for(int i=1; i<n; i++){
        int x,y,z;cin>>x>>y>>z;
        arr[x][y]=z;
        arr[y][x]=z;
    }
    for(int i=0; i<m; i++){
        int x,y;cin>>x>>y;
        dfs(x,y,0);
        cout<<k<<"\n";
        fill(vis,vis+1001,false);
        k =INT_MAX;
    }

}
