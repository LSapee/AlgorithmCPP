class Solution {
public:
    int mirrorDistance(int n) {
        int r = n;
        int num = 0;
        while(r>0){
            num*=10;
            num+=r%10;
            r/=10;
        }
        return abs(num-n);
    }
};