#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    int dp[n];
    fill(dp,dp+n,0);
    int mn;cin>>mn;
    for(int i=1; i<n; i++){
        int temp; cin>>temp;
        mn=min(temp,mn);
        dp[i]= max(dp[i-1],temp-mn);
    }
    for(int i=0; i<n; i++)cout<<dp[i]<<" ";
}