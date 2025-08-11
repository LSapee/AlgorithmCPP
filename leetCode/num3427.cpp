class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n =nums.size();
        int ans =0;
        for(int i=0; i<n; i++){
            int st = max(0,i-nums[i]);
            int temp =0;
            for(int j=st; j<=i; j++)temp+=nums[j];
            ans+=temp;
        }
        return ans;
    }
};