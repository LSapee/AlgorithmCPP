#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // m 최대 무게
    cin>>n>>m;
    // w무게 , v 가치
    vector<int> w(n,0);
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin>>w[i]>>v[i];
    }
    int dp[n+1][m+1];
    fill(dp[0],dp[n+1],0);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(w[i-1]<=j){
                dp[i][j] =max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m];
}