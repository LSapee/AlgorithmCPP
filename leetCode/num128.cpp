class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0) return 0;
        sort(nums.begin(),nums.end());

        int ans =1;
        int k = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1) k++;
                else{
                    ans= max(ans,k);
                    k=1;
                }
            }
        }
        return max(ans,k);
    }
};