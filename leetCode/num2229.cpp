class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        for(int i=1; i<n; i++)if(nums[i]!=nums[i-1]+1)return 0;
        return 1;
    }
};