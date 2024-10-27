class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int cnt = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
                if(matrix[i][j]==1){
                    dp[i+1][j+1]=min(dp[i][j+1],min(dp[i+1][j],dp[i][j]))+1;
                    cnt+=dp[i+1][j+1];
                }
            }
        }
        return cnt;
    }
};