class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans[n+1];
        int maxVal =0;
        for(int i=n-1; i>=0; i--){
            ans[i] = maxVal-prices[i];
            maxVal = max(maxVal,prices[i]);
        }
        maxVal =0;
        for(int i=0; i<n; i++)maxVal = max(ans[i],maxVal);
        return maxVal;
    }
};