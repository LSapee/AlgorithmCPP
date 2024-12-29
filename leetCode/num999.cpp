class Solution {
public:
    pair<int,int> Rook;
    void findRook(vector<vector<char>>& board){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j]=='R'){
                    Rook= {i,j};
                    return ;
                }
            }
        }
    }
    int moveUp(vector<vector<char>>& board){
        int x = Rook.first;
        int y = Rook.second;
        for(int i=x-1; i>=0; i--){
            if(board[i][y]=='.')continue;
            if(board[i][y]=='B')return 0;
            if(board[i][y]=='p')return 1;
        }
        return 0;
    }
    int moveDown(vector<vector<char>>& board){
        int x = Rook.first;
        int y = Rook.second;
        for(int i=x+1; i<8; i++){
            if(board[i][y]=='.')continue;
            if(board[i][y]=='B')return 0;
            if(board[i][y]=='p')return 1;
        }
        return 0;
    }
    int moveR(vector<vector<char>>& board){
        int x = Rook.first;
        int y = Rook.second;
        for(int i=y+1; i<8; i++){
            if(board[x][i]=='.')continue;
            if(board[x][i]=='B')return 0;
            if(board[x][i]=='p')return 1;
        }
        return 0;
    }
    int moveL(vector<vector<char>>& board){
        int x = Rook.first;
        int y = Rook.second;
        for(int i=y-1; i>=0; i--){
            if(board[x][i]=='.')continue;
            if(board[x][i]=='B')return 0;
            if(board[x][i]=='p')return 1;
        }
        return 0;
    }
    int numRookCaptures(vector<vector<char>>& board) {
        findRook(board);
        int ans =0;
        ans += moveUp(board);
        ans += moveDown(board);
        ans += moveR(board);
        ans += moveL(board);
        return ans;
    }
};