class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a=nums[0],b=nums[0];
        for(int n : nums){
            a = min(a,n);
            b = max(b,n);
        }
        int ans = b-a-(2*k);
        return ans > 0 ?ans : 0;
    }
};