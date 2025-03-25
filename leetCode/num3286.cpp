class Solution {
public:
#define X first
#define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int n,m;
    vector<vector<int>> hp;

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        n =grid.size();
        m = grid[0].size();
        hp.resize(n,vector<int>(m,0));
        hp[0][0] = health-grid[0][0];
        queue<pair<int,int>> Q;
        Q.push({0,0});
        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.X;
                int y = dy[i]+cur.Y;
                if(x<0||x>=n||y<0||y>=m)continue;
                if(hp[x][y]>=hp[cur.X][cur.Y]-grid[x][y])continue;
                hp[x][y]=hp[cur.X][cur.Y]-grid[x][y];
                Q.push({x,y});
            }
        }
        if(hp[n-1][m-1]>=1)return true;
        else return false;
    }
};