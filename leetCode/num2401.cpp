class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int st=0;
        int ans =0;
        int usedBits =0;
        for(int i=0; i<nums.size(); i++){
            while((usedBits & nums[i])!=0){
                usedBits ^= nums[st];
                st++;
            }
            usedBits |= nums[i];
            ans = max(ans,i-st+1);
        }
        return ans;
    }
};