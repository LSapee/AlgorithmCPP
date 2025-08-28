class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n =grid.size();
        int t = 1;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=0; i+j<n; j++)temp.push_back(grid[i+j][j]);
            sort(temp.begin(),temp.end(),greater<int>());
            for(int j=0; i+j<n; j++)grid[i+j][j] = temp[j];
        }
        for(int i=1; i<n; i++){
            vector<int> temp;
            for(int j=0; i+j<n; j++)temp.push_back(grid[j][j+i]);
            sort(temp.begin(),temp.end());
            for(int j=0; i+j<n; j++)grid[j][j+i] = temp[j];
        }
        return grid;
    }
};