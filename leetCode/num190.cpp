class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num =0,p=31;
        while(n!=0){
            num+=(n&1) <<p;
            n = n>>1;
            p--;
        }
        return num;
    }
};