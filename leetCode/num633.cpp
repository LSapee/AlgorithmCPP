class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        int k = sqrt(c);
        if(c-k*k==0)return true;
        for(int i=1; i<=k; i++){
            int a = c-i*i;
            int t = sqrt(a);
            if(a-t*t==0) return true;
        }
        return false;
    }

};