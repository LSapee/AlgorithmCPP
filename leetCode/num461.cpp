class Solution {
public:
    string itob(int a){
        string s = "";
        while(a>0){
            s=to_string(a%2)+s;
            a/=2;
        }
        return s;
    }

    int hammingDistance(int x, int y) {
        int ans =0;
        string s = itob(x);
        string ss = itob(y);
        while(s.size()<ss.size())s = "0"+s;
        while(ss.size()<s.size())ss = "0"+ss;
        for(int i=0; i<s.size(); i++)if(s[i]!=ss[i])ans++;
        return ans;
    }
};