class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans =0;
        vector<int> arr = heights;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size(); i++)if(arr[i]!=heights[i])ans++;
        return ans;
    }
};