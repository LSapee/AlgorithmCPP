#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n,m;
    int num =1;
    while(cin>>n>>m){
        int cnt =0;
        if(n==0&&m==0)break;
        vector<vector<int>> arr(n+1,vector<int>(n+1,-1));
        for(int i=0; i<m; i++){
            int a,b;cin>>a>>b;
            arr[a][b] =1;
            arr[b][a] =1;
        }
        bool vis[n+1];
        fill(vis,vis+n+1,false);
        queue<int> Q;
        for(int i=1; i<=n; i++){
            if(vis[i])continue;
            Q.push(i);
            vis[i]= true;
            cnt++;
            bool ok =false;
            while(!Q.empty()){
                int x = Q.front();Q.pop();
                for(int j=1;j<=n; j++){
                    if(x==j)continue;
                    if(arr[x][j]!=1)continue;
                    if(vis[j])ok =true;
                    vis[j] = true;
                    arr[x][j] = -1;
                    arr[j][x] = -1;
                    Q.push(j);
                }
            }
            if(ok)cnt--;
        }
        if(cnt>1){
            cout<<"Case "<<num<<": A forest of "<<cnt<<" trees.\n";
        }else if(cnt==1){
            cout<<"Case "<<num<<": There is one tree.\n";
        }else{
            cout<<"Case "<<num<<": No trees.\n";
        }
        num++;
    }
}