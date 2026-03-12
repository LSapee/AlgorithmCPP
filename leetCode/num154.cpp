class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans =nums[0];
        int n = nums.size();
        if(nums[0]>=nums[n-1]){
            for(int i=1; i<n; i++){
                if(nums[i]<nums[i-1]){
                    return nums[i];
                }
            }
        }else{
            return nums[0];
        }
        return ans;
    }
};