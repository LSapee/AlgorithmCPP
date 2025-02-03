class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt = 1;
        int ans = -1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1])cnt++;
            else {
                ans = cnt > ans ? cnt:ans;
                cnt =1;
            }
        }
        ans = cnt > ans ? cnt:ans;
        cnt =1;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]>nums[i+1])cnt++;
            else {
                ans = cnt > ans ? cnt:ans;
                cnt=1;
            }
        }
        return cnt > ans ? cnt : ans;
    }
};