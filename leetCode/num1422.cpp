class Solution {
public:
    int ZtoO(string ss, string s){
        int z =0;
        int o = 0;
        for(int i=0; i<ss.size(); i++) if(ss[i]=='0')z++;
        for(int i=0; i<s.size(); i++) if(s[i]=='1')o++;
        return z+o;
    }
    int maxScore(string s) {
        int n = s.size();
        int ans = 0;
        string ss ="";
        for(int i=0; i<n-1; i++){
            ss+=s[i];
            ans = max(ans,ZtoO(ss,s.substr(i+1,n)));
        }
        return ans;
    }
};