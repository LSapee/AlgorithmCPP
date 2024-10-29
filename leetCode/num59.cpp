class Solution {
public:
#define X first
#define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,-1));
        int t = 0;
        queue<pair<int,int>> Q;
        Q.push({0,0});
        ans[0][0]=1;
        if(n==1)return ans;
        while(!Q.empty()){
            pair<int,int> cur = Q.front();Q.pop();
            int x = cur.X+dx[t];
            int y = cur.Y+dy[t];
            if(x<0||x>=n||y<0||y>=n){
                t++;
                t=t%4;
                Q.push(cur);
                continue;
            }
            if(ans[x][y]!=-1){
                t++;
                t=t%4;
                Q.push(cur);
                continue;
            }
            ans[x][y] = ans[cur.X][cur.Y]+1;
            if(ans[x][y]==n*n)break;
            Q.push({x,y});
        }
        return ans;
    }
};