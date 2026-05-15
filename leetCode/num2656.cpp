class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int ans =0;
        while(k--){
            ans+=nums[n];
            nums[n]++;
        }
        return ans;
    }
};