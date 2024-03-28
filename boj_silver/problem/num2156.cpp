#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int arr[n];for(int i=0; i<n;i++)cin>>arr[i];
    int dp[n+1];
    fill(dp,dp+n+1,0);
    if(n>=1)dp[1] = arr[0];
    if(n>=2)dp[2] = arr[0]+arr[1];
    for(int i=3; i<=n; i++){
        dp[i] = max({dp[i-1],dp[i-2]+arr[i-1],dp[i-3]+arr[i-2]+arr[i-1]});
    }
    cout<<dp[n];
}