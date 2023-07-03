class SnakeGame {
public:
    vector<vector<int>> target;
    int n=0,m=0;
    int row=0,col=0;
    int st=0;
    deque<int> dq;
    SnakeGame(int width, int height, vector<vector<int>>& food) {
        target = food;
        n = height -1;
        m = width -1;
        dq.emplace_back(0);
    }
    int move(string direction) {
        if(direction[0]=='R'){
            col++;
        }else if(direction[0]=='U'){
            row--;
        }else if(direction[0]=='D'){
            row++;
        }else if(direction[0]=='L'){
            col--;
        }
        if(col<0||col>m||row<0||row>n) return -1;
        if(st<target.size() && row == target[st][0] && col == target[st][1]){
            st++;
        }else{
            dq.pop_front();
        }
        // 자신을 무는 경우
        if(find(dq.begin(),dq.end(), row*(m+1)+col)!= dq.end()) return -1;
        dq.emplace_back(row*(m+1)+col);
        return st;
    }
};

/**
 * Your SnakeGame object will be instantiated and called as such:
 * SnakeGame* obj = new SnakeGame(width, height, food);
 * int param_1 = obj->move(direction);
 */