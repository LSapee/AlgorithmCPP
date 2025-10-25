class Solution {
public:
    int totalMoney(int n) {
        int ans =0;
        int st =0;
        while(n>0){
            for(int i=1; i<=7; i++){
                ans+= (i+st);
                n--;
                if(n==0)break;
            }
            st++;
        }
        return ans;
    }
};