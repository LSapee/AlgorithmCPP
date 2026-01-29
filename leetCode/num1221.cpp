class Solution {
public:
    int balancedStringSplit(string s) {
        int L =0;
        int R= 0;
        int ans =0;
        int N= s.size();
        for(int i=0; i<N; i++){
            if(s[i]=='R')R++;
            if(s[i]=='L')L++;
            if(L==R){
                ans++;
                L =0;
                R=0;
            }
        }
        return ans;
    }
};