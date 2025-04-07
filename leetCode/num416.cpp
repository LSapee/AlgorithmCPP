class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++) sum += nums[i];
        if(sum%2==1)return false;
        int target = sum /2;
        vector<bool> vis(target+1,false);
        vis[0] = true;
        for(int i=0; i<n; i++){
            int k =nums[i];
            for(int j=target; j>=k; j--){
                vis[j] = vis[j]||vis[j-k];
            }
        }
        return vis[target];

    }
};