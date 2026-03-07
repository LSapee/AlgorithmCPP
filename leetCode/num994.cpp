class Solution {
public:
#define X first
#define Y second

    int dx[4] = {0,1,-1,0};
    int dy[4] = {1,0,0,-1};

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int totalOranges = 0;
        queue<pair<int,int>> Q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    totalOranges++;
                    Q.push({i,j});
                }else if(grid[i][j]==1)totalOranges++;
            }
        }
        queue<pair<int,int>> Qt;
        int RO = 0;
        int time =0;
        while(!Q.empty()){
            RO++;
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.X;
                int y = dy[i]+cur.Y;
                if(x<0||x>=n||y<0||y>=m)continue;
                if(grid[x][y]!=1)continue;
                Qt.push({x,y});
                grid[x][y] =2;
            }
            if(Q.empty()){
                Q = Qt;
                if(Q.empty())break;
                time++;
                while(!Qt.empty()) Qt.pop();
            }
        }
        return RO == totalOranges ? time : -1;
    }
};