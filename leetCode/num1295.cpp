class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i]>=1000&&nums[i]<10000)||(nums[i]>=10&&nums[i]<100)||nums[i]==100000)ans++;
        }
        return ans;
    }
};