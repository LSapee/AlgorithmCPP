class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int S1 = s1.size();
        int S2 = s2.size();
        int S3 = s3.size();
        if(S1+S2 !=S3)return false;
        vector<vector<bool>> dp(S1+1, vector<bool>(S2+1,false));
        for(int i=0; i<=S1; i++){
            for(int j=0; j<=S2; j++){
                if(i==0&&j==0)dp[i][j]=true;
                else if(i==0){
                    dp[i][j] = dp[i][j-1] && s2[j-1] == s3[i+j-1];
                }else if(j==0){
                    dp[i][j] = dp[i-1][j] && s1[i-1] == s3[i+j-1];
                }else{
                    dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1]) || (dp[i][j-1] && s2[j-1] == s3[i+j-1]);
                }
            }
        }
        return dp[S1][S2];
    }
};