class Solution {
public:
    string largestEven(string s) {
        int n = s.size()-1;
        while(n>=0 && s[n]=='1') n--;
        if(n<0)return "";
        string ans = s.substr(0,n+1);
        return ans;
    }
};