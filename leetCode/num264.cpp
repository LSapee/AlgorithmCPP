class Solution {
public:
#define ll long long
    int nthUglyNumber(int n) {
        vector<int> uglyNumbers(n);
        uglyNumbers[0] = 1;
        int im2=0,im3=0,im5=0;
        int nx2=2,nx3=3,nx5=5;

        for(int i=1;i<n; i++){
            int nxUglyNumber = min(nx2,min(nx3,nx5));
            uglyNumbers[i]=nxUglyNumber;
            if(nxUglyNumber==nx2){
                im2++;
                nx2 = uglyNumbers[im2]*2;
            }
            if(nxUglyNumber==nx3){
                im3++;
                nx3 = uglyNumbers[im3]*3;
            }
            if(nxUglyNumber==nx5){
                im5++;
                nx5 = uglyNumbers[im5]*5;
            }
        }
        return uglyNumbers[n-1];
    }
};