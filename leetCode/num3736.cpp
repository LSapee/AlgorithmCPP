class Solution {
public:
    int minMoves(vector<int>& nums) {
        int MAX = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        int ans =0;
        for(int i=0; i<n; i++) if(nums[i]!= MAX) ans+= MAX-nums[i];
        return ans;
    }
};