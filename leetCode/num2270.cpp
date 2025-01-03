class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans =0;
        int n = nums.size();
        long long leftSum = 0;
        long long rightSum = 0;
        for(int i=0; i<n; i++) rightSum +=nums[i];
        for(int i=0; i<n-1; i++){
            leftSum +=nums[i];
            if(leftSum >= rightSum-leftSum)ans++;
        }
        return ans;
    }
};