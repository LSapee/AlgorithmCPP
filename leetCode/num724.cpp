class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int mx = 0;
        for(int i=0; i<nums.size(); i++) mx+=nums[i];
        for(int i=0; i<nums.size(); i++){
            mx-=nums[i];
            if(mx ==sum)return i;
            sum += nums[i];
        }
        return -1;
    }
};