class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n =nums.size();
        int r=0,l=0;
        int curMin,curMax;
        long long windowLen = 0,total =0;
        for(r=0; r<n; r++){
            curMin = min(curMin,nums[r]);
            curMax = max(curMax,nums[r]);
            if(curMax-curMin>2){
                windowLen = r-l;
                total += (windowLen * (windowLen+1)/2);
                l=r;
                curMin=curMax =nums[r];
                while(l>0 && abs(nums[r]-nums[l-1])<=2){
                    l--;
                    curMin =min(curMin,nums[l]);
                    curMax =max(curMax,nums[l]);
                }
                if(l<r){
                    windowLen = r-l;
                    total -=(windowLen * (windowLen+1)/2);
                }
            }
        }
        windowLen = r-l;
        total += (windowLen * (windowLen+1)/2);
        return total;
    }
};