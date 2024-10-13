class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans =0;
        int cnt =1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1])cnt++;
            else {
                if(ans<cnt)ans=cnt;
                cnt=1;
            }
        }
        if(cnt>ans)ans=cnt;
        return ans;
    }
};