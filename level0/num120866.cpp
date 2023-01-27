//안전지대
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            int li = i-1;
            int lj = j-1;
            int ri = i+1;
            int rj = j+1;
            if(li<0){
                li=0;
            }
            if(lj<0){
                lj=0;
            }
            if(ri==board.size()){
                ri = ri-1;
            }
            if(rj == board[i].size()){
                rj = rj-1;
            }
            if(board[i][j]==1){
                if(board[li][lj] ==0){
                    board[li][lj] =2;
                }
                if(board[li][j] ==0){
                    board[li][j] =2;
                }
                if(board[li][rj] ==0){
                    board[li][rj] =2;
                }
                if(board[i][lj] ==0){
                    board[i][lj] =2;
                }
                if(board[i][rj] ==0){
                    board[i][rj] =2;
                }
                if(board[ri][lj] ==0){
                    board[ri][lj] =2;
                }
                if(board[ri][j] ==0){
                    board[ri][j] =2;
                }
                if(board[ri][rj] ==0){
                    board[ri][rj] =2;
                }
            }
        }
    }
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            if(board[i][j]==0){
                answer++;
            }
        }
    }
    return answer;
}