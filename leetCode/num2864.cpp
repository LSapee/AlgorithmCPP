class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int o = 0;
        string ans ="";
        for(int i=0; i<n; i++)if(s[i]=='1')o++;
        o--;
        for(int i=0; i<o; i++)ans+="1";
        for(int i=0; i<n-(o+1); i++)ans+="0";
        return ans+"1";
    }
};