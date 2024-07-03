class Solution {
public:
    int n;
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        for(int l =0, r=n-4; l<4;l++,r++){
            ans = min(ans,nums[r]-nums[l]);
        }
        return ans;
    }
};
