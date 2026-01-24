class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st = 0;
        int ed = nums.size()-1;
        int ans =0;
        while(st<ed){
            int temp = nums[st]+nums[ed];
            if(ans<temp)ans=temp;
            st++;
            ed--;
        }
        return ans;
    }
};