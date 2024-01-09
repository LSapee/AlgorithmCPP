#include <bits/stdc++.h>
using namespace std;

int tree[1002];
int mv[1002][35];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    for(int i=1; i<=n; i++)cin>>tree[i];
    int cnt =0;
    for(int i=1; i<=n; i++){
        if(tree[i]==1)cnt++;
        mv[i][0] =cnt;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            mv[i][j] = max(mv[i-1][j-1],mv[i-1][j])+(1+j%2==tree[i]);
        }
    }
    int ans =0;
    for(int i=0; i<=m; i++)ans = max(mv[n][i],ans);
    cout<<ans;
}