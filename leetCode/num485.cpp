class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        vector<int> arr(n,0);
        int ans =nums[0];
        if(nums[0]==1) arr[0] =1;
        for(int i=1; i<n; i++){
            if(nums[i-1]==nums[i]&& nums[i]==1) arr[i]= arr[i-1]+1;
            else if(nums[i]==1) arr[i]++;
            ans = max(ans,arr[i]);
        }
        return ans;
    }
};