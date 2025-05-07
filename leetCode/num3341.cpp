class Solution {
#define LL long long
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n =moveTime.size();
        int m =moveTime[0].size();
        // 범위가 10^9이라 오버플로우 방지용 LL
        vector<vector<LL>> rooms(n,vector<LL>(m,LLONG_MAX));
        queue<pair<int,int>> Q;
        Q.push({0,0});
        rooms[0][0] = 0;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.first;
                int y = dy[i]+cur.second;
                LL curTime = rooms[cur.first][cur.second];
                if(x<0||x>=n||y<0||y>=m)continue;
                if(rooms[x][y]<curTime)continue;
                if(curTime+1<=moveTime[x][y])rooms[x][y]= moveTime[x][y]+1;
                else if(curTime+1>moveTime[x][y]&& curTime+1<rooms[x][y])rooms[x][y] = curTime+1;
                else continue;
                Q.push({x,y});
            }
        }
        return rooms[n-1][m-1];
    }
};