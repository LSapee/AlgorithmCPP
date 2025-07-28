class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int allSum = 0;
        int oneSum = 0;
        for(int i=0; i<n; i++){
            allSum += nums[i];
            int temp = nums[i];
            while(temp>0){
                oneSum+= temp%10;
                temp/=10;
            }
        }
        return max(allSum,oneSum)-min(allSum,oneSum);
    }
};