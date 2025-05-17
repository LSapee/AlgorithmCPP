class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> temp;
        for(int i=0; i<nums.size(); i++)if(nums[i]==0)temp.push_back(0);
        for(int i=0; i<nums.size(); i++)if(nums[i]==1)temp.push_back(1);
        for(int i=0; i<nums.size(); i++)if(nums[i]==2)temp.push_back(2);
        nums=temp;
    }
};