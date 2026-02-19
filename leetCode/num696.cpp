class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans =0;
        int cur =1,prev=0;
        int n =s.size();
        for(int i=1; i<n; i++){
            if(s[i]!=s[i-1]){
                ans+=min(prev,cur);
                prev =cur;
                cur =1;
            }else cur++;
        }
        ans+=min(prev,cur);
        return ans;
    }
};