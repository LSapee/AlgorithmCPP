class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='0'&&s[i]<='9'){
                ans+= s[i-1]+(s[i]-'0');
            }else ans+=s[i];
        }
        return ans;
    }
};