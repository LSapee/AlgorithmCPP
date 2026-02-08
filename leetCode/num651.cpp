class Solution {
public:
    int maxA(int n) {
        vector<int> dp(n+1);
        for(int i=0; i<=n; i++)dp[i]=i;
        for(int i=0; i<=n-3; i++){
            int ed =min(n,i+6);
            for(int j= i+3; j<=ed; j++){
                dp[j] = max(dp[j],(j-i-1)*dp[i]);
            }
        }
        return dp[n];
    }
};