class Solution {
public:
    int pivotInteger(int n) {
        int sumNum = 0;
        for(int i=1; i<=n; i++)sumNum+=i;
        int t= 0;
        for(int i =1; i<=n; i++){
            t+=i;
            if(t==sumNum)return i;
            sumNum-=i;
        }
        return -1;
    }
};