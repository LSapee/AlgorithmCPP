class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = matrix.size();
        int m = n>0?matrix[0].size():0;
        int dp[n+1][m+1];
        fill(dp[0],dp[n+1],0);
        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1])+1;
                    ans = max(ans,dp[i][j]);
                }
            }
        }
        return ans*ans;

    }
};