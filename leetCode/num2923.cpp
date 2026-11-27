class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i=0; i<n; i++){
            int cnt =0;
            for(int j=0; j<n; j++){
                if(i!=j && grid[i][j]==1)cnt++;
                else if(i!=j && grid[i][j]==0)break;
            }
            if(cnt==n-1)return i;
        }
        return -1;
    }
};