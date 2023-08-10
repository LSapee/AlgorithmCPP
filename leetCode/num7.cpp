class Solution {
public:
    int reverse(int x) {
        bool n =false;
        if(x<0) {
            if(x==INT_MIN) return 0;
            n = true;
            x*=-1;
        }
        int ans =0;
        while(x>0){
            if(INT_MAX/10<ans) return 0;
            ans= ans*10;
            ans+=x%10;
            x/=10;
        }
        if(n) return ans*-1;
        return ans;
    }
};