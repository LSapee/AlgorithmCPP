class Solution {
public:
    vector<bool> check;
    vector<vector<pair<int,int>>> arr;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int N,M;
    void go(vector<vector<char>>& board, int x,int y,int index){
        queue<pair<int,int>> Q;
        Q.push({x,y});
        board[x][y] = index+'0';
        bool ok = 1;
        vector<pair<int,int>> temp;
        temp.push_back({x,y});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<4; i++){
                int X = cur.first+dx[i];
                int Y = cur.second+dy[i];
                if(X<0||X>=N ||Y<0 ||Y>=M){
                    ok =0;
                    continue;
                }
                if(board[X][Y] != 'O')continue;
                board[X][Y] = board[x][y];
                Q.push({X,Y});
                temp.push_back({X,Y});
            }
        }
        arr.push_back(temp);
        check.push_back(ok);
    }

    void fillBoard(vector<vector<char>>& board,int index, char OX){
        int n= arr[index].size();
        for(int i=0; i<n; i++){
            int x = arr[index][i].first;
            int y = arr[index][i].second;
            board[x][y]=OX;
        }
    }

    void solve(vector<vector<char>>& board) {
        N = board.size();
        M = board[0].size();
        int cnt =0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(board[i][j] == 'O'){
                    go(board,i,j,0);
                }
            }
        }
        int T = check.size();
        for(int i=0; i<T; i++){
            if(check[i])fillBoard(board,i,'X');
            else fillBoard(board,i,'O');
        }
    }
};