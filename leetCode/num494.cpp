class Solution {
public:
    int ans = 0;
    void dfs(int sum,int index,int target, vector<int>& nums){
        if(index == nums.size()){
            if(sum == target) ans++;
        }else{
            dfs(sum+nums[index],index+1,target,nums);
            dfs(sum-nums[index],index+1,target,nums);
        }
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        dfs(0,0,target,nums);
        return ans;
    }
};