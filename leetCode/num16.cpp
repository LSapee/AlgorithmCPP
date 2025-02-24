class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==3) return nums[0]+nums[1]+nums[2];
        int ans =INT_MAX;
        for(int i=0; i<n; i++){
            int st = i+1;
            int ed = n-1;
            while(st<ed){
                int sum3 = nums[i]+nums[st]+nums[ed];
                if(abs(target-sum3)<abs(ans)) ans = target-sum3;
                if(sum3<target)st++;
                else ed--;
            }
        }
        return target-ans;
    }
};