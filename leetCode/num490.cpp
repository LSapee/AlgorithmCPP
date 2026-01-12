class Solution {
public:
#define X first
#define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    // 공을 한번 움직이면 한쪽방향으로 쭉 움직인다.
    // 벽을 만나서 멈추는 것을 반복하여 골에 넣을수 있으면 true, 불가능하면 false를 반환한다.
    // 단순 bfs와는 다르나 해당 지점에 언제 도착했는지를 가지고 bfs를 돌릴수 있을 것 같다.
    // 9ms....-> 미리 포인트를 map에 저장하면 더 빨라질까..?
    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        queue<pair<int,int>> Q;
        vector<vector<bool>> vis(101,vector<bool>(101,false));
        int n =maze.size();
        int m =maze[0].size();
        vis[start[0]][start[1]] = true;
        Q.push({start[0],start[1]});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = cur.X;
                int y = cur.Y;
                while(maze[x][y]==0){
                    if((x+dx[i]<0 || x+dx[i]>=n || y+dy[i]<0 || y+dy[i]>=m) ||maze[x+dx[i]][y+dy[i]]==1  ){
                        if(vis[x][y])break; // 이미 방문한 포인트면 Q에 추가없이 패스
                        else {
                            Q.push({x,y}); // 방문한적 없는 포인트면 Q에 추가
                            vis[x][y]= true;
                            break;
                        }
                    }
                    x+=dx[i];
                    y+=dy[i];
                }
            }
        }
        return vis[destination[0]][destination[1]];
    }
};