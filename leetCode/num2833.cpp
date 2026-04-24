class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L =0;
        int R =0;
        int temp =0;
        int n =moves.size();
        for(int i=0; i<n;i++){
            if(moves[i]=='L')L++;
            if(moves[i]=='R')R++;
            if(moves[i]=='_')temp++;
        }
        if(R>L)R+=temp;
        else if(L>R)L+=temp;
        else return temp;
        return abs(R-L);
    }
};