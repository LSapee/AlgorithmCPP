class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans =-1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]>=nums[j])continue;
                ans = ans < nums[j]-nums[i] ?  nums[j]-nums[i]:ans;
            }
        }
        return ans;
    }
};