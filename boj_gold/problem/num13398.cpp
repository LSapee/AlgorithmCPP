#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int dp[n];
    int dp2[n+1];
    if(n==1) {
        cout<<arr[0];
        return 0;
    }
    int ans = arr[0];
    dp[0] =arr[0];
    for(int i=1; i<n; i++) {
        dp[i] = max(arr[i],dp[i-1]+arr[i]);
        ans = max(ans,dp[i]);
    }
    dp2[n] = 0;
    for(int i=n-1; i>=1; i--) dp2[i] = max(arr[i],dp2[i+1]+arr[i]);
    for(int i=1; i<n-1; i++) ans = max(ans,dp[i-1]+dp2[i+1]);
    cout<<ans;
    return 0;
}