class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>> dp(n,vector<int>(n+1,0));
        vector<int> sufSum(n,0);
        sufSum[n-1] = piles[n-1];
        for(int i=n-2; i>=0; i--)sufSum[i]=sufSum[i+1]+piles[i];
        for(int i=n-1; i>=0; i--){
            for(int j=1; j<=n; j++){
                if(i+2*j >=n){
                    dp[i][j] = sufSum[i];
                }else{
                    for(int k=1; k<=2*j; k++){
                        dp[i][j] =max(dp[i][j],sufSum[i]-dp[i+k][max(j,k)]);
                    }
                }
            }
        }
        return dp[0][1];
    }
};