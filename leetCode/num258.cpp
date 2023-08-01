class Solution {
public:
    int addDigits(int num) {
        int k =num;
        int sum =0;
        while(k>9){
            sum += num%10;
            num/=10;
            if(num ==0){
                k=sum;
                num=sum;
                sum=0;
            }
        }
        return k;
    }
};