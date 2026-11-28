class Solution {
public:
    int countVowelStrings(int n) {
        return K(n,1);
    }
    int K(int n, int v){
        if(n==0)return 1;
        int ans =0;
        for(int i= v; i<=5; i++) ans+= K(n-1,i);
        return ans;
    }
};