class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int minMoney = 1;
        int maxMoney = 0;
        int n =nums.size();
        for(int i=0; i<nums.size(); i++)if(nums[i]>maxMoney) maxMoney=nums[i];
        while(minMoney<maxMoney){
            int mid = (minMoney+maxMoney)/2;
            int passTotal =0;
            for(int i=0; i<n; i++){
                if(nums[i]<=mid){
                    passTotal+=1;
                    i++;
                }
            }
            if(passTotal>=k){
                maxMoney = mid;
            }else minMoney = mid+1;
        }
        return minMoney;
    }
};