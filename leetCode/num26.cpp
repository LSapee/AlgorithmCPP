class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int st =0;
        for(int i=1; i<nums.size(); i++){
            if(nums[st]==nums[i])continue;
            else {
                st++;
                nums[st] = nums[i];
            }
        }
        return st+1;
    }
};