class Solution {
public:
    bool tt(int n,int t){
        int temp =1;
        while(n>0){
            temp*=n%10;
            n/=10;
        }
        return temp % t == 0 ?1 :0;
    }

    int smallestNumber(int n, int t) {
        while(n<=100){
            if(tt(n,t))return n;
            n++;
        }
        return 0;
    }
};