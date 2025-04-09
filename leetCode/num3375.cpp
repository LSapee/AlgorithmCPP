class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans =0;
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        for(int i=0; i<n-1; i++){
            if(nums[i]!=nums[i+1])ans++;
            if(nums[i]<k)return -1;
        }
        if(nums[n-1]<k)return -1;
        if(nums[n-1]>k)ans++;
        return ans;
    }
};
