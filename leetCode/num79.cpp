class Solution {
public:
    vector<vector<bool>>vis;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int n,m;
    int SIZE;
    bool check(vector<vector<char>>& board,string s,string word,int x,int y,int cur){
        if(cur==SIZE) return true;
        for(int i=0; i<4; i++){
            int tempX = x+dx[i];
            int tempY = y+dy[i];
            if(tempX<0 || tempX>=n || tempY<0 || tempY>=m)continue;
            if(board[tempX][tempY]!=word[cur])continue;
            char temp = board[tempX][tempY];
            board[tempX][tempY] = '#';
            vis[tempX][tempY] =true;
            if(check(board,s+word[cur],word,tempX,tempY,cur+1))return true;
            vis[tempX][tempY] =false;
            board[tempX][tempY] = temp;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        SIZE = word.size();
        vis.resize(n,vector<bool>(m,false));
        string s = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]== word[0]){
                    char temp = board[i][j];
                    board[i][j] = '#';
                    if(check(board,s+board[i][j],word,i,j,1))return true;
                    board[i][j] = temp;
                }
            }
        }
        return false;
    }
};