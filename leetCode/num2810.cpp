class Solution {
public:
    string finalString(string s) {
        string ans = "";
        int n =s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='i')reverse(ans.begin(),ans.end());
            else ans+=s[i];
        }
        return ans;
    }
};