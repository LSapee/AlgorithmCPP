class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int index =0;
        int ans =0;
        for(int i=0; i<n; i++){
            if(nums[i] < 0)nums[i]*=-1;
            else break;
            k--;
            if(k==0)break;
        }
        sort(nums.begin(),nums.end());
        if(k%2==0){
            for(int i=0; i<n; i++)ans+=nums[i];
        }else{
            for(int i=1; i<n; i++)ans+=nums[i];
            ans-=nums[0];
        }
        return ans;
    }
};