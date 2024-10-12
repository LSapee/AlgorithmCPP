class Solution {
public:
    int arr[10002];
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2,0);
        int n = nums.size();
        for(int i=0; i<n; i++)arr[nums[i]]++;
        for(int i=1; i<=n; i++){
            if(arr[i]==0)ans[1]=i;
            if(arr[i]==2)ans[0]=i;
        }
        return ans;
    }
};