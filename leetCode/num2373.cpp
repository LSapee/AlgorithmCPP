class Solution {
public:
    int dx[8] = {0,1,1,1,0,-1,-1,-1};
    int dy[8] = {1,1,0,-1,-1,-1,0,1};
    int nine(vector<vector<int>>& grid,int i,int j){
        int ans =grid[i][j];
        for(int a=0; a<8; a++){
            int x = i+dx[a];
            int y = j+dy[a];
            if(ans<grid[x][y])ans = grid[x][y];
        }
        return ans;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> arr(n-2,vector<int>(n-2,0));
        for(int i=1; i<n-1; i++){
            for(int j=1; j<n-1; j++){
                arr[i-1][j-1] = nine(grid,i,j);
            }
        }
        return arr;
    }
};