class Solution {
public:
    int countValidPrefixes(string s) {
        int o = 0;
        int z = 0;
        int ans =0;
        string A = "";
        int n = s.size();
        int a = 0;
        while(a<n){
            A+=s[a];
            if(s[a]=='1')o++;
            else z++;
            a++;
            if(o==z || o+1 ==z || z+1 == o)ans++;
        }
        return ans;
    }
};