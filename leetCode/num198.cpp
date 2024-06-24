class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==0) return 0;

        int maxRobbedAmount[nums.size()+1];
        maxRobbedAmount[n] = 0;
        maxRobbedAmount[n-1] = nums[n-1];
        for(int i= n-2; i>=0; i--){
            maxRobbedAmount[i] = max(maxRobbedAmount[i+1],maxRobbedAmount[i+2]+nums[i]);
        }
        return maxRobbedAmount[0];
    }
};