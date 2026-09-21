class Solution {
public:
#define ll long long
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<ll> ans(k,0);
        vector<ll> dp(k,0);
        int n = nums.size();
        for(int i=0; i<n; i++){
            vector<ll> nxtDP(k,0);
            int cur = nums[i]%k;
            nxtDP[cur]++;
            for(int j=0; j<k; j++){
                if(dp[j]>0){
                    int nxt = (cur*j)%k;
                    nxtDP[nxt] += dp[j];
                }
            }
            for(int j=0; j<k; j++)ans[j]+=nxtDP[j];
            dp = move(nxtDP);
        }
        return ans;
    }
};