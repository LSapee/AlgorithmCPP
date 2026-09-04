class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int a = INT_MAX;
        int index =-1;
        for(int i=0; i<n; i++){
            int mx = -1;
            int mn = INT_MAX;
            for(int j=0; j<=i; j++)mx = max(nums[j],mx);
            for(int j=i; j<n; j++)mn =min(nums[j],mn);
            int temp = mx-mn;
            if(temp <= k) {
                return i;
            }
        }
        return -1;
    }
};