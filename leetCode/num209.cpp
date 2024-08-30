class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size();
        int ans =INT_MAX;
        int st =0;
        int ed = 0;
        int sumNums = 0;
        int cnt =0;
        for(int i=0; i<n; i++)if(nums[i]==target)return 1;
        while(ed<n){
            sumNums+=nums[ed++];
            cnt++;
            while(sumNums>=target){
                sumNums-=nums[st++];
                cnt--;
                if(sumNums<target) ans=min(ans,cnt+1);
            }
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};