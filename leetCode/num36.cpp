class Solution {
public:

    bool rowCheck(int stx,int sty,vector<vector<char>> &board){
        char target = board[stx][sty];
        for(int i=0; i<9; i++){
            if(i==stx)continue;
            if(board[i][sty]==target)return false;
        }
        return true;
    }
    bool columnCheck(int stx,int sty,vector<vector<char>> &board){
        char target = board[stx][sty];
        for(int i=0; i<9; i++){
            if(i==sty)continue;
            if(board[stx][i]==target)return false;
        }
        return true;
    }
    bool sqCheck(int stx,int sty,vector<vector<char>> &board){
        char target = board[stx][sty];
        int x,y;
        if(stx<3) x=0;
        else if(stx<6) x=3;
        else x=6;
        if(sty<3) y=0;
        else if(sty<6) y=3;
        else y=6;
        for(int i=x; i<x+3; i++){
            for(int j=y; j<y+3; j++){
                if(i==stx&&j==sty)continue;
                if(board[i][j]==target)return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>> &board) {
        cout<<board.size();
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')continue;
                if(!rowCheck(i,j,board))return false;
                if(!columnCheck(i,j,board))return false;
                if(!sqCheck(i,j,board))return false;
            }
        }
        return true;
    }
};