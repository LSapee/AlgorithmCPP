class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans =INT_MAX;
        int n = nums.size();
        int one = -1;
        int two = -1;
        for(int i=0; i<n; i++){
            if(nums[i]==0) continue;
            else if(nums[i] == 1)one = i;
            else if(nums[i] == 2)two = i;
            if(one != -1 && two !=-1 )ans =min(ans,abs(two-one));
        }
        return ans == INT_MAX ? -1 : ans;
    }
};