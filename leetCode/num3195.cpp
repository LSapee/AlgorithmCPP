class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int t = -1;
        int b = -1;
        int l = -1;
        int r = -1;
        int n = grid.size();
        int m = grid[0].size();
        // top 위치
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    t=i;
                    break;
                }
            }
            if(t!=-1)break;
        }
        // left 위치
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[j][i]==1){
                    l=i;
                    break;
                }
            }
            if(l!=-1)break;
        }
         // bottom 위치
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    b=i;
                    break;
                }
            }
            if(b!=-1)break;
        }
        // right 위치
        for(int i=m-1; i>=0; i--){
            for(int j=0; j<n; j++){
                if(grid[j][i]==1){
                    r=i;
                    break;
                }
            }
            if(r!=-1)break;
        }
        r++;
        b++;
        return (b-t)*(r-l);
    }
};