class Solution {
public:
    int arr[301];
    int countQuadruplets(vector<int>& nums) {
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k= j+1; k<nums.size(); k++){
                    for(int z = k+1; z<nums.size(); z++){
                        if(nums[i]+nums[j]+nums[k]==nums[z])ans++;
                    }
                }
            }
        }
        return ans;
    }
};