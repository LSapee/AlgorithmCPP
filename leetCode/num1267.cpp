class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> visC(m,0);
        vector<int> visR(n,0);
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] ==1){
                    visC[j]++;
                    visR[i]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j])
                    ans+= visR[i]>1 || visC[j]>1;
            }
        }
        return ans;
    }
};