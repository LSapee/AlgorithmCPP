class Solution {
public:
    int sumBase(int n, int k) {
        int ans =0;
        string s = "";
        while(n>0){
            ans+= n%k;
            n/=k;
        }
        return ans;
    }
};