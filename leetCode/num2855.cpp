class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int> arr;
        int ans =0;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]<nums[i-1]){
                ans = n-i;
                for(int j=i; j<n; j++)arr.push_back(nums[j]);
                for(int j=0; j<i; j++)arr.push_back(nums[j]);
            }
        }
        if(arr.size()==0)return 0;
        for(int i=1; i<n; i++)if(arr[i-1]>arr[i])return -1;
        return ans;
    }
};