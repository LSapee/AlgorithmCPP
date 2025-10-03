class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==2)return -1;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[n-1] && nums[i] != nums[i-1])return nums[i];
        }
        return -1;
    }
};