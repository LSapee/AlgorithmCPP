class Solution {
public:
    int arrangeCoins(int n) {
        int ans =1;
        while(n>0){
            n-=ans;
            if(n<=0) break;
            ans++;
        }
        if(n<0) return ans-1;
        return ans;
    }
};