class Solution {
public:
    int countAsterisks(string s) {
        int ans =0;
        int n = s.size();
        bool ok = false;
        for(int i=0; i<n; i++){
            if(!ok){
                if(s[i]=='|'){
                    ok=true;
                    continue;
                }else if(s[i]=='*')ans++;
            }
            if(s[i]=='|')ok=false;
        }
        return ans;
    }
};