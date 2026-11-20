class Solution {
public:
    bool ok(string &ans,char cur, int k){
        int N = ans.size();
        int st = N-k;
        if(st<0) st =0;
        while(st<N){
            if(ans[st]==cur)return 0;
            st++;
        }
        return 1;
    }

    string mergeCharacters(string s, int k) {
        string ans = "";
        int n =s.size();
        ans+=s[0];
        for(int i=1; i<n; i++){
            if(ok(ans,s[i],k))ans+=s[i];
        }
        return ans;
    }
};