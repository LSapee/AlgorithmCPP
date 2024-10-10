class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = -1;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                int K = nums[i]+nums[j];
                if(K<k)ans = max(ans,K);
            }
        }
        return ans;
    }
};