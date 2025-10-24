class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans =0;
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==1000){
                ans+=1111;
            }else if(nums[i]>=100){
                int x = max((nums[i]/10)%10,nums[i]%10);
                x = max(nums[i]/100,x);
                ans+=(x*111);
            }else if(nums[i]>=10){
                int x = max(nums[i]/10,nums[i]%10);
                ans+=(x*11);
            }else ans+=nums[i];
        }
        return ans;
    }
};