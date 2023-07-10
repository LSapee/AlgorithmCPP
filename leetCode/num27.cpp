class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans =0;
        vector<int> a;
        for(int i=0; i<nums.size(); i++) if(nums[i]!=val) {ans++;
                a.push_back(nums[i]);
            }
        nums=a;
        return ans;
    }
};