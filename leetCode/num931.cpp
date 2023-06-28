class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = matrix.size();
        int arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0) arr[i][j] = matrix[i][j];
                else {
                    if(j==0) arr[i][j] = matrix[i][j] +min(arr[i-1][j],arr[i-1][j+1]);
                    else if(j==n-1)  arr[i][j] = matrix[i][j] +min(arr[i-1][j],arr[i-1][j-1]);
                    else arr[i][j] = matrix[i][j] +min(arr[i-1][j+1],min(arr[i-1][j],arr[i-1][j-1]));
                }
            }
        }
        int ans = INT_MAX;
        for(int i=0; i<n; i++) ans = min(arr[n-1][i],ans);
        return ans;
    }
};