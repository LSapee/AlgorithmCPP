class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n+1,0);
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(arr[nums[i]]==0){
                arr[nums[i]]++;
            }else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};