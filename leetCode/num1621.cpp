class Solution {
public:
    const int MOD = 1e9+7;
    // 파스칼의 삼각형으로 풀었는데 -> 페르마의 소정리로도 가능하다함 (어렵)
    int numberOfSets(int n, int k) {
        int a = n+k-1;
        int b = k*2;
        if(a<b)return 0;
        vector<vector<int>> dp(a+1,vector<int>(b+1,0));
        for(int i=0; i<=a; i++){
            dp[i][0] =1;
            for(int j=1; j<=min(i,b); j++){
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j])%MOD;
            }
        }
        return dp[a][b];
    }
};