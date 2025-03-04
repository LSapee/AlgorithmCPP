class Solution {
public:
    bool checkPowersOfThree(int n) {
        int t=3;
        while(t<=n)t*=3;
        while(t>0){
            n = n>=t ? n-t:n;
            t/=3;
        }
        return n==0 ? 1:0;
    }
};