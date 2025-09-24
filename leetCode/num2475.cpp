class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j])continue;
                for(int k =j+1; k<n; k++){
                    if(nums[i]!=nums[k] && nums[j]!=nums[k])ans++;
                }
            }
        }
        return ans;
    }
};