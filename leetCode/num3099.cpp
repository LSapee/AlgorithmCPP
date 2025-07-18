class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int k =x;
        int h = 0;
        while(k>0){
            h+=k%10;
            k/=10;
        }
        if(x%h==0)return h;
        else return -1;
    }
};