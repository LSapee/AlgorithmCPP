class Solution {
public:
#define X first
#define Y second
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};


    void bfs(vector<vector<int>>& arr,int row,int col){
        queue<pair<int,int>> Q;
        int k = arr.size();
        arr[row][col] =1;
        Q.push({row,col});
        while(!Q.empty()){
            pair<int,int> cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int x = dx[i]+cur.X;
                int y = dy[i]+cur.Y;
                if(x<0||x>=k||y<0||y>=k)continue;
                if(arr[x][y]!=0)continue;
                arr[x][y]=1;
                Q.push({x,y});
            }
        }
    }

    // 이해해보기
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        vector<vector<int>> arr(n*3,vector<int>(n*3,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int Row = i*3;
                int Col = j*3;
                if(grid[i][j]=='\\'){
                    arr[Row][Col] = 1;
                    arr[Row+1][Col+1] = 1;
                    arr[Row+2][Col+2] = 1;
                }else if(grid[i][j]=='/'){
                    arr[Row][Col+2] = 1;
                    arr[Row+1][Col+1] = 1;
                    arr[Row+2][Col] = 1;
                }
            }
        }
        int cnt =0;
        for(int i=0; i<n*3; i++){
            for(int j=0; j<n*3; j++){
                if(arr[i][j]==0){
                    bfs(arr,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};