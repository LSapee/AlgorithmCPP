class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int N,M;
    bool divK(vector<vector<int>>& grid,queue<pair<int,int>> &Q, int k,int X,int Y){
        int sum = grid[X][Y]%k;
        grid[X][Y] = 0;
        Q.push({X,Y});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.first;
                int y = dy[i]+cur.second;
                if(x<0||x>=N||y<0||y>=M)continue;
                if(grid[x][y]==0)continue;
                sum+=grid[x][y]%k;
                sum%=k;
                grid[x][y]=0;
                Q.push({x,y});
            }
        }
        return sum==0;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        N =grid.size();
        M = grid[0].size();
        int ans =0;
        queue<pair<int,int>> Q;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(grid[i][j]==0)continue;
                if(divK(grid,Q,k,i,j))ans++;
            }   
        }
        return ans;
    }
};