class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        vector<int> ansValues(n);
        ansValues[0] = values[0];
        int ans =0;
        for(int i=1; i<n; i++){
            int k = values[i]-i;
            ans = max(ans,ansValues[i-1]+k);
            int back = values[i]+i;
            ansValues[i] = max(ansValues[i-1],back);
        }
        return ans;
    }
};