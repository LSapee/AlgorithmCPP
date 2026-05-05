class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                ans = ans|nums[i];
            }
        }
        return ans;
    }
};