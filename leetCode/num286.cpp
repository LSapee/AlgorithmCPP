class Solution {
#define X first
#define Y second
#define MX INT_MAX
public:

    queue<pair<int,int>> Q;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int n,m;
    bool vis[251][251];

    void wallsAndGates(vector<vector<int>>& rooms) {
        n = rooms.size();
        m = rooms[0].size();
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(rooms[i][j]==0)Q.push({i,j});

        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            vis[cur.X][cur.Y] = true;
            for(int i=0; i<4; i++){
                int x = cur.X+dx[i];
                int y = cur.Y+dy[i];
                if(x<0||x>=n||y<0||y>=m)continue;
                if(vis[x][y]||rooms[x][y]!=MX)continue;
                vis[x][y] =true;
                rooms[x][y] = rooms[cur.X][cur.Y]+1;
                Q.push({x,y});
            }
        }
    }
};