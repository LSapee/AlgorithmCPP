class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ss = "";
        for(int i=0; i<s.size(); i++){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))ss+=s[i];
        }
        int st = 0;
        for(int i=s.size()-1; i>=0; i--){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
                s[i] = ss[st];
                st++;
            }
        }
        return s;
    }
};