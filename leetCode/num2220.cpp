class Solution {
public:
    string toB(int k){
        string s = "";
        while(k>0){
            s=to_string(k%2)+s;
            k/=2;
        }
        return s;
    }

    int minBitFlips(int start, int goal) {
        string f = toB(start);
        string t = toB(goal);
        int ans =0;
        while(f.size()>t.size())t = "0"+t;
        while(f.size()<t.size())f= "0"+f;
        for(int i=0; i<f.size(); i++)if(f[i]!=t[i])ans++;
        return ans;
    }
};