class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        if(n==0)return false;
        for(int i=0;i<n-1; i++){
            if(nums[i+1] != nums[i]+1)return false;
        }
        if(nums[n] != nums[n-1])return false;
        if(nums[n]!=n)return false;
        return true;
    }
};