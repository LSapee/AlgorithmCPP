class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n =nums.size();
        int curSum =0;
        int mxSum = 0;
        int mnSum = 0;
        for(int i=0; i<n; i++){
            curSum +=nums[i];
            mxSum = max(mxSum,curSum);
            mnSum = min(mnSum,curSum);
        }
        return mxSum -mnSum;
    }
};