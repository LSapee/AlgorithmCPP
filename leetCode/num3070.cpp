class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        vector<vector<int>> arr;
        int n = grid.size();
        int m = grid[0].size();
        arr.assign(n,vector<int>(m,0));
        arr[0][0] = grid[0][0];
        for(int i=1; i<n; i++)arr[i][0] = arr[i-1][0]+grid[i][0];
        for(int i=1; i<m; i++)arr[0][i] = arr[0][i-1]+grid[0][i];
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                arr[i][j] = (arr[i][j-1] - arr[i-1][j-1])+ arr[i-1][j]+grid[i][j];
            }
        }
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]<=k)ans++;
            }
        }
        return ans;
    }
};