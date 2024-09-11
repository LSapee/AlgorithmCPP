#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;cin>>T;
    while(T--){
        int N;cin>>N;
        vector<int> nums(N,0);
        for(int i=0; i<N; i++) cin>>nums[i];
        vector<int> dp(N,0);
        dp[0]= nums[0];
        int ans = INT_MIN;
        for(int i=1; i<N; i++)dp[i] = max(dp[i-1]+nums[i],nums[i]);
        for(int i=0; i<N; i++) ans = max(dp[i],ans);
        cout<<ans<<"\n";
    }
    return 0;
}