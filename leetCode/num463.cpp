class Solution {
public:
#define X first
#define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int bfs(vector<vector<int>>& grid,int row,int col){
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = 0;
        queue<pair<int,int>> Q; Q.push({row,col});
        grid[row][col]= -1;
        while(!Q.empty()){
            pair<int,int> cur = Q.front();Q.pop();
            int k =0;
            for(int i=0; i<4; i++){
                int x =dx[i]+cur.X;
                int y= dy[i]+cur.Y;
                if(x<0||x>=rows||y<0||y>=cols)continue;
                if(grid[x][y]==-1){
                    k++;
                    continue;
                }
                if(grid[x][y]==0)continue;
                grid[x][y]=-1;
                k++;
                Q.push({x,y});
            }
            cnt += 4-k;
        }
        return cnt;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt =0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    cnt += bfs(grid,i,j);
                }
            }
        }
        return cnt;
    }
};