class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> arr(n);
        arr[0].push_back(nums[0]);
        ans = arr[0];
        for(int i=1; i<n; i++){
            arr[i].push_back(nums[i]);
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0 && arr[i].size()<arr[j].size()+1){
                    arr[i] = arr[j];
                    arr[i].push_back(nums[i]);
                }
            }
            if(arr[i].size()>ans.size())ans = arr[i];
        }
        return ans;
    }
};