class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.rbegin(),nums.rend());
        vector<int> ans;
        ans.push_back(nums[0]);
        int st =0;
        for(int i=1; i<n; i++){
            if(ans.size()==k)break;
            if(ans[st]!=nums[i]){
                ans.push_back(nums[i]);
                st++;
            }
        }
        return ans;
    }
};