class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans =0;
        for(int i=0; i<n; i++)sort(grid[i].begin(),grid[i].end());
        for(int i=0; i<m; i++){
            int k = grid[0][i];
            for(int j=1; j<n; j++){
                k = max(k,grid[j][i]);
            }
            ans+=k;
        }

        return ans;
    }
};