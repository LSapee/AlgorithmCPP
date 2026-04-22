class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int allsum =0;
        int a = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)allsum+=nums[i];
        for(int i=n-1; i>=0; i--){
            a+= nums[i];
            allsum-=nums[i];
            ans.push_back(nums[i]);
            if(a>allsum) break;
        }
        return ans;
    }
};