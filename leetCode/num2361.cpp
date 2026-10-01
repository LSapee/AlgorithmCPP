class Solution {
public:
    vector<long long> minimumCosts(vector<int>& regular, vector<int>& express, int expressCost) {
        int n = regular.size();
        vector<vector<long long>> DP(2,vector<long long>(n,0));
        vector<long long> ans(n);
        DP[0][0] = regular[0];
        DP[1][0] = expressCost+express[0];
        ans[0] = min(DP[0][0],DP[1][0]);
        for(int i=1; i<n; i++){
            DP[0][i] = min(DP[0][i-1]+regular[i],DP[1][i-1]+regular[i]);
            DP[1][i] = min(DP[0][i-1]+expressCost+express[i],DP[1][i-1]+express[i]);
            ans[i] = min(DP[0][i],DP[1][i]);
        }
        return ans;
    }
};