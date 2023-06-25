class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = grid.size()-1;
        int m = grid[0].size()-1;
        int arr[n+1][m+1];
        fill(arr[0],arr[n],0);
        for(int i=n; i>=0; i--){
            for(int j=m; j>=0; j--){
                if(i==n && j!=m) arr[i][j] = grid[i][j] +arr[i][j+1];
                else if(j==m && i!=n) arr[i][j] = grid[i][j] + arr[i+1][j];
                else if(i!=n && j!=m) arr[i][j] = grid[i][j] + min(arr[i+1][j],arr[i][j+1]);
                else arr[i][j] = grid[i][j];
            }
        }
        return arr[0][0];
    }
};