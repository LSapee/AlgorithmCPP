class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        while(n>0){
            s+= to_string(n%2);
            n/=2;
        }
        string ss = s;
        reverse(ss.begin(),ss.end());
        int ans =0;
        for(int i =0; i<s.size(); i++){
            if(s[i]!=ss[i])ans++;
        }
        return ans;
    }
};
