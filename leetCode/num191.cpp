class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n>1){
            ans+=n%2==1 ?1:0;
            n/=2;
        }
        if(n==1) ans++;
        return ans;
    }
};