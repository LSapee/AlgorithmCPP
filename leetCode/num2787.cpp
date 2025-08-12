class Solution {
public:
    int numberOfWays(int n, int x) {
        int ans = 0;
        long long MOD = 1e9+7;
        vector<vector<long long>> arr(n+1, vector<long long>(n+1,0));
        arr[0][0] = 1;
        for(int i= 1; i<=n; i++){
            long long temp = pow(i,x);
            for(int j = 0; j<=n; j++){
                arr[i][j] = arr[i-1][j];
                if(j>=temp){
                    arr[i][j] = (arr[i][j]+arr[i-1][j-temp])%MOD;
                }
            }
        }
        return arr[n][n];
    }
};