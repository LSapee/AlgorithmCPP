class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int ans =0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i-1][j]>=grid[i][j]){
                    int temp = grid[i-1][j]-grid[i][j];
                    ans+=temp+1;
                    grid[i][j]+=temp+1;
                }
            }
        }
        return ans;
    }
};