class Solution {
public:
    int ds(int n){
        int ans =0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int ss(int n){
        int ans =0;
        while(n>0){
            int k =n%10;
            n/=10;
            ans+=k*k;
        }
        return ans;
    }

    bool checkGoodInteger(int n) {
        int digitSum = ds(n);
        int squareSum = ss(n);
        return squareSum - digitSum  >= 50;
    }
};