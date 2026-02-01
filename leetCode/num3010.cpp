class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans =nums[0]+nums[1]+nums[2];
        for(int i=1; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans = min(ans,nums[0]+nums[i]+nums[j]);
            }
        }
        return ans;
    }
};