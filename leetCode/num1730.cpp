class Solution {
public:
    // 오랜만에 풀어보는 단순 BFS
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    pair<int,int> findStar(vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)if(grid[i][j]=='*')return {i,j};
        }
        return {-1,-1};
    }


    int getFood(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,-1));
        pair<int,int> cur = findStar(grid);
        queue<pair<int,int>> Q;
        Q.push(cur);
        vis[cur.first][cur.second]=0;
        while(!Q.empty()){
            auto A = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = A.first+dx[i];
                int y = A.second+dy[i];
                if(x<0||x>=n||y<0||y>=m)continue;
                if(grid[x][y] == 'X' || vis[x][y] != -1)continue;
                if(grid[x][y] == '#')return vis[A.first][A.second]+1;
                vis[x][y] = vis[A.first][A.second]+1;
                Q.push({x,y});
            }
        }
        return -1;
    }
};