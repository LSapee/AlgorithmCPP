#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,ss;cin>>s>>ss;
    int n=s.size(),m=ss.size();
    int dp[n+1][m+1];
    // dp 배열 초기화
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            dp[i][j] =0;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j =1; j<=m; j++){
            if(s[i-1]==ss[j-1])dp[i][j] = dp[i-1][j-1]+1;
        }
    }
    int mx = INT_MIN;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            mx = max(dp[i][j],mx);
        }
    }
    cout<<mx;
    return 0;
}