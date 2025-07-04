class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int backSum = 0;
        int frontSum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)backSum+=nums[i];
        for(int i=0; i<n; i++){
            backSum-=nums[i];
            if(frontSum == backSum)return i;
            frontSum+=nums[i];
        }
        return -1;
    }
};