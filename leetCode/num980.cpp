class Solution {
public:
    int dx[4] ={0,1,0,-1};
    int dy[4] ={1,0,-1,0};
    int n,m;
    int ob =0;
    int ans =0;
    void back(vector<vector<int>>& grid,vector<vector<bool>>& vis,int x,int y, int cnt){
        if(grid[x][y] == 2){
            if(cnt==(n*m)-ob)ans++;
            return;
        }
        for(int i=0; i<4; i++){
            int X = x+dx[i];
            int Y = y+dy[i];
            if(X<0 || X>=n || Y<0||Y>=m)continue;
            if(vis[X][Y] || grid[X][Y]==-1 )continue;
            vis[X][Y] = 1;
            back(grid,vis,X,Y,cnt+1);
            vis[X][Y] = 0;
        }
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int x=0,y=0;
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==-1)ob++;
                if(grid[i][j]==1){
                    x=i;
                    y=j;
                }
            }
        }
        vis[x][y]=1;
        back(grid,vis,x,y,1);
        return ans;
    }
};