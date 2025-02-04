class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int ans =nums[0];
        for(int i=n-1; i>0; i--){
            int sum = 0;
            int k =i;
            while(k>0){
                if(nums[k]<=nums[k-1])break;
                sum+=nums[k--];
            }
            if(sum==0)continue;
            if(nums[k]<nums[k+1])sum+=nums[k];
            ans = sum > ans ? sum:ans;
        }
        return ans;
    }
};