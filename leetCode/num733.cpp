class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> Q;
        int n = image.size();
        int m = image[0].size();
        bool vis[n][m];
        memset(vis,false,sizeof(vis));
        int targetColor = image[sr][sc];
        vis[sr][sc] =true;
        image[sr][sc] = color;
        Q.push({sr,sc});
        while(!Q.empty()){
            auto cur = Q.front();Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.first;
                int y = dy[i]+cur.second;
                if(x<0||x>=n||y<0||y>=m)continue;
                if(image[x][y]!=targetColor||vis[x][y])continue;
                image[x][y] = color;
                vis[x][y] = true;
                Q.push({x,y});
            }
        }
        return image;
    }
};