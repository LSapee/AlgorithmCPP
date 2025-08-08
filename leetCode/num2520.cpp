class Solution {
public:
    int countDigits(int num) {
        int k =num;
        int ans =0;
        while(num>0){
            int temp = num%10;
            num/=10;
            if(k%temp==0)ans++;
        }
        return ans;
    }
};