class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ed = n-1;
        double ans = 100;
        for(int i=0; i<n/2; i++){
            ans = min(ans,(double)(nums[i]+nums[ed-i])/2);
        }
        return ans;
    }
};