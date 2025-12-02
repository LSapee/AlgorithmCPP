class Solution {
public:
    int trailingZeroes(int n) {
        int ans =0;
        long long num = 1;
        for(int i=1; i<=n; i++){
            num*=i;
            while(num%10==0){
                num/=10;
                ans++;
            }
            num%=1000000;
        }
        return ans;
    }
};