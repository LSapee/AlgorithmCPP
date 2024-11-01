class Solution {
public:
    string makeFancyString(string s) {
        string ans ="";
        if(s.size()<3)return s;
        for(int i=0; i<s.size()-2; i++){
            if(s[i]!=s[i+1]||s[i+1]!=s[i+2])ans+=s[i];
        }
        ans+= s[s.size()-2];
        ans+= s[s.size()-1];
        return ans;
    }
};