class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=2; i<nums.size(); i=i+2){
            if(nums[i]>nums[i-1]) swap(nums[i],nums[i-1]);
        }
    }
};