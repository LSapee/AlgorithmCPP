class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=n-1; i>=0; i--){
            if(nums[i]<0)return -1;
            for(int j=0; j<n; j++){
                if(nums[j]>0)break;
                if(nums[i]+nums[j]==0)return nums[i];
            }
        }
        return -1;
    }
};