class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i=0; i<n; i++){
            int nxt;
            if(nums[i]>0) nxt = i+nums[i];
            else if(nums[i]<0) nxt = n+i+nums[i];
            else {
                ans[i] = nums[i];
                continue;
            }
            while(nxt<0)nxt+=n;
            ans[i] =nums[nxt%n];
        }
        return ans;
    }
};