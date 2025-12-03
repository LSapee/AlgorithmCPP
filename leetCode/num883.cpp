class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]>0)ans++;
            }
        }
        for(int i=0; i<n; i++){
            int k =0;
            for(int j=0; j<n; j++){
                k = max(k,grid[i][j]);
            }
            ans+=k;
        }
        for(int i=0; i<n; i++){
            int k =0;
            for(int j=0; j<n; j++){
                k = max(k,grid[j][i]);
            }
            ans+=k;
        }
        return ans;
    }
};