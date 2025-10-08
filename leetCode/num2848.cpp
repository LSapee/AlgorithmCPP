class Solution {
public:
    void go(int a, int b,vector<int>& arr){
        for(int i =a; i<=b; i++)arr[i] = 1;
    }
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> arr(101,0);
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n; i++){
            go(nums[i][0],nums[i][1],arr);
        }
        for(int i=0; i<101; i++)ans+=arr[i];
        return ans;
    }
};