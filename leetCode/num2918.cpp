class Solution {
public:
    int cntZero(vector<int>& nums,long long &sumNum){
        int cnt =0;
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0)cnt++;
            sumNum+=(long long)nums[i];
        }
        return cnt;
    }

    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long ans =0;
        long long sumNums1 =0,sumNums2 =0;
        int cnt1 = cntZero(nums1,sumNums1),cnt2=cntZero(nums2,sumNums2);
        if(cnt1==0&&sumNums1<sumNums2+cnt2)return -1;
        if(cnt2==0&&sumNums2<sumNums1+cnt1)return -1;
        return max(sumNums1+cnt1,sumNums2+cnt2);
    }
};