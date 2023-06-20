/*
 승리조건  row =0  or col =0  or row == col  or col +row =2
 해답에서 이 부분 설명 보고 품
 */
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        vector<int> row(3,0),col(3,0);
        int a=0;
        int b=0;
        for(int i=0; i<moves.size(); i++){
            int x = moves[i][0];
            int y= moves[i][1];
            if(i%2==0){
                row[x] +=1;
                col[y] +=1;
                if(x==y) a++;
                if(x==2-y) b++;
            }else{
                row[x]-=1;
                col[y]-=1;
                if(x==y)a--;
                if(x==2-y)b--;
            }
            if(row[x]==3 || col[y] ==3||a==3||b==3)return "A";
            if(row[x]==-3 || col[y] ==-3 ||a==-3 || b==-3) return "B";
        }
        if(moves.size()==9)return "Draw";
        return "Pending";
    }
};