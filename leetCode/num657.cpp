class Solution {
public:
    bool judgeCircle(string moves) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int k =0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                k++;
            }else if(moves[i]=='D'){
                k--;
            }else if(moves[i]=='L'){
                k+=100000;
            }else{
                k-=100000;
            }
        }
        if(!k) return true;
        return false;
    }
};