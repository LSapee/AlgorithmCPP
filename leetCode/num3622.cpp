class Solution {
public:
    int sm(int n){
        int ans =0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int db(int n){
        int ans =1;
        while(n>0){
            ans *= (n%10);
            n/=10;
        }
        return ans;
    }
    bool checkDivisibility(int n) {
        int sum = sm(n);
        int dou = db(n);
        return n%(sum+dou) == 0 ? 1:0;
    }
};