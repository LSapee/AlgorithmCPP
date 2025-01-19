class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k =nums[0];
        int ans = 0;
        while(k>=10){
            ans+=k%10;
            k/=10;
        }
        ans+=k;
        if(ans%2==0)return 1;
        return 0;
    }
};