class Solution {
public:
    vector<int> sortByAbsoluteValue(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        vector<vector<int>> arr(101);
        for(int i=0; i<n; i++)arr[abs(nums[i])].push_back(nums[i]);
        vector<int> ans;
        for(int i=0; i<=100; i++){
            for(int j=0; j<arr[i].size(); j++)ans.push_back(arr[i][j]);
        }
        return ans;
    }
};