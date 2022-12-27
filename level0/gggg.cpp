#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    //지뢰 맵
    vector<vector<int>> board ={{0, 0, 0, 0, 1}, {0, 1, 0, 1, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 1, 0, 0, 0}};
    int answer = 0;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            int li = i-1; //2차원 배열의 왼쪽 숫자
            int lj = j-1;
            int ri = i+1; //2차원 배열의 오른쪽 숫자
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
            }//여기;
            if(board[i][j]==1){
                //1 왼쪽위
                if(board[li][lj] ==0){
                    board[li][lj] =2;
                }
                //2 바로위
                if(board[li][j] ==0){
//                    일반 지뢰랑 다른 위험지역은 2로 분류
                    board[li][j] =2;
                }
                //3 오른 위
                if(board[li][rj] ==0){
                    board[li][rj] =2;
                }
                //4 왼쪽
                if(board[i][lj] ==0){
                    board[i][lj] =2;
                }
                //6 오른쪽
                if(board[i][rj] ==0){
                    board[i][rj] =2;
                }
                //7 왼쪽 아래
                if(board[ri][lj] ==0) {
                    board[ri][lj] = 2;
                }
                //8 바로 아래
                if(board[ri][j] ==0){
                    board[ri][j] =2;
                }
                //9 오른족 아래
                if(board[ri][rj] ==0){
                    board[ri][rj] =2;
                }
            }
        }
    }
//    전체 배열에서 0의 갯수 카운트
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            cout<<board[i][j];
            if(board[i][j]==0){
                answer++;
            }
        }
        cout<<"\n";
    }
    cout<<answer;
    return 0;
}