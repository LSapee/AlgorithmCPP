class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int numIslands(vector<vector<char>>& grid) {
        int ans =0;
        int a = grid.size();
        int b = grid[0].size();
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                queue<pair<int,int>> Q;
                if(grid[i][j]=='1'){
                    Q.push({i,j});
                    grid[i][j] = '0';
                    ans++;
                }
                while(!Q.empty()){
                    pair<int,int> cur = Q.front(); Q.pop();
                    for(int k=0; k<4; k++){
                        int x = cur.first+dx[k];
                        int y = cur.second+dy[k];
                        if(x<0||x>=a||y<0||y>=b)continue;
                        if(grid[x][y]=='0')continue;
                        grid[x][y]='0';
                        Q.push({x,y});
                    }
                }
            }
        }
        return ans;
    }
};