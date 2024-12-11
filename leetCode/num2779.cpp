class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int ed =0;
        int ans =0;
        for(int i=0; i<n; i++){
            while(ed<n&&nums[ed]-nums[i] <= 2*k)ed++;
            ans = max(ans,ed-i);
        }
        return ans;
    }
};