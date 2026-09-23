class Solution {
public:
    // 
    int minOperations(vector<int>& nums, int x) {
        int total_sum = 0;
        int n = nums.size();
        for(int a: nums)total_sum+=a;
        //남겨야 할 영역을 구하기 위해서.
        int target = total_sum-x;
        if(target == 0)return n;
        if(target<0)return -1;
        int ans =-1;
        int cur_sum =0;
        int l =0;
        for(int r=0; r<n; r++){
            cur_sum+=nums[r];
            while(l<=r && cur_sum>target){
                cur_sum-=nums[l];
                l++;
            }
            if(cur_sum==target) ans = max(ans,r-l+1);
        }
        return ans == -1 ? -1 : n-ans;
    }
};