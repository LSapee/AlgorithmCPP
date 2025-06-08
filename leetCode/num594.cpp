class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int ans =0;
        if(nums[0]==nums[n-1])return 0;
        for(int i=0; i<n;i++){
            int target =nums[i];
            vector<int> cnt(2,0);
            cnt[0]=1;
            int cur =i+1;
            while(cur<n){
                if(nums[cur]==target)cnt[0]++;
                else if(nums[cur]==target+1)cnt[1]++;
                else break;
                cur++;
            }
            if(cnt[0]==0||cnt[1]==0)continue;
            ans = max(ans,cnt[0]+cnt[1]);
        }
        return ans;
    }
};