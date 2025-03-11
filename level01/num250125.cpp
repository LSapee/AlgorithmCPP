#include <string>
#include <vector>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    string color = board[h][w];
    for(int i=0; i<4; i++){
        int x = dx[i]+h;
        int y = dy[i]+w;
        if(x<0||x>=board[0].size()||y<0||y>=board[0].size())continue;
        if(board[x][y].compare(color)!= 0 )continue;
        answer++;
    }
    return answer;
}