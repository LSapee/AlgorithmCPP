class Solution {
public:
    int countKeyChanges(string s) {
        int n =s.size();
        int ans =0;
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]-32 || s[i] ==s[i-1]+32 || s[i] ==s[i-1])continue;
            else ans++;
        }
        return ans;
    }
};