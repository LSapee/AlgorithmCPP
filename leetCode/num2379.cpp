class Solution {
public:
    int GetK(string s){
        int ans = 0;
        for(int i=0; i<s.size(); i++)if(s[i]=='B')ans++;
        return s.size()-ans;
    }
    int minimumRecolors(string blocks, int k) {
        int ans = INT_MAX;
        for(int i=0; i<=blocks.size()-k; i++){
            int t= GetK(blocks.substr(i,k));
            if(t<ans)ans = t;
        }
        return ans;
    }
};