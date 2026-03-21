class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i=x,ix =x+k-1; i<ix; i++,ix--){
            for(int j=y;j<(y+k); j++){
                swap(grid[i][j],grid[ix][j]);
            }
        }  
        return grid;
    }
};
