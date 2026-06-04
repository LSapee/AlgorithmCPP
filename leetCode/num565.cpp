class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        vector<int> cnt(n,0);
        vector<bool> vis(n,false);
        for(int i=0; i<n; i++){
            int st =i;
            int visCnt =0;
            while(!vis[st]){
                if(cnt[nums[st]]!= 0)break;
                visCnt++;
                vis[st] = true;
                st = nums[st];
            }
            cnt[i] = cnt[st]+visCnt;
            ans = max(ans,cnt[i]);
            if(ans == n)break;
        }
        return ans;
    }
};