class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans =0;
        int n =nums.size();
        for(int a:nums) ans|=a;
        ans = ans<<(n-1);
        return ans;
    }
};