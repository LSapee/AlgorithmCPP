class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans =0,st =-1,minIn=-1,maxIn =-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<minK||nums[i]>maxK)st=i;
            if(nums[i]==maxK)maxIn=i;
            if(nums[i]==minK)minIn=i;
            int temp = min(minIn,maxIn)-st;
            if(temp<0)temp =0;
            ans+=temp;
        }
        return ans;
    }
};