class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int f=0,s=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<10)f+=nums[i];
            else s+=nums[i];
        }
        return f!=s;
    }
};