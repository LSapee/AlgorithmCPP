class Solution {
public:
    const int MOD = 1e9+7;
    int countHomogenous(string s) {
        int n =s.size();
        vector<int> cnt(n,0);
        cnt[0]=1;
        for(int i=1; i<n; i++){
            if(s[i-1] == s[i])cnt[i] = cnt[i-1]+1;
            else cnt[i]=1;
        }
        int ans =0;
        for(int i=0; i<n; i++){
            ans += cnt[i] % MOD;
            ans%=MOD;
        }
        return ans;
    }
};