class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int k =0;
        int ans =0;
        int n =nums.size();
        for(int i=0; i<n; i++){
            k+=nums[i];
            if(k==0)ans++;
        }
        return ans;
    }
};