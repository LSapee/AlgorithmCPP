class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum =0;
        int n = nums.size();
        for(int i=0;i<n; i++)sum+=nums[i];
        return sum%k == 0 ? 0 : sum%k;
    }
};