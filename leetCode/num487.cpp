class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mx = 1;
        int ms = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==0)continue;
            if(nums[i]==nums[i-1])ms++;
            else ms = 1;
            mx = max(ms,mx);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1)continue;
            int k = 1;
            int r = i-1;
            int l = i+1;
            while(l<nums.size()&& nums[l]!=nums[i]){
                k++;
                l++;
            }
            while(r>=0&& nums[r]!=nums[i]){
                k++;
                r--;
            }
            mx = max(k,mx);
        }
        return mx;
    }
};