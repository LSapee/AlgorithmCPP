class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        int ed = 0;
        int cur = 0;
        for(int i=0; i<n-1; i++){
            cur = max(cur,i+nums[i]);
            if(i==ed){
                ans++;
                ed=cur;
            }

        }
        return ans;
    }
};