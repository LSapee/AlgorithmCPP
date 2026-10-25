class Solution {
public:
    #define X first
    #define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int N,M,A;
    bool island(vector<vector<int>>& grid,int X,int Y){
        grid[X][Y] = A;
        queue<pair<int,int>> Q;
        Q.push({X,Y});
        bool ok = true;
        while(!Q.empty()){
            auto cur =Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.X;
                int y = dy[i]+cur.Y;
                if(x<0 || x>=N ||y<0||y>=M){
                    ok= false;
                    continue;
                }
                if(grid[x][y] == 1 ||grid[x][y]!= 0) continue;
                Q.push({x,y});
                grid[x][y]= A;
            }
        }
        A++;
        return ok;
    }

    int closedIsland(vector<vector<int>>& grid) {
        N=grid.size();
        M=grid[0].size();
        A=2;
        int ans =0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(grid[i][j] == 0) if(island(grid,i,j))ans++;
            }
        }
        return ans;
    }
};