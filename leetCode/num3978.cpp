class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &a:nums)mp[a]++;
        return mp[nums[nums.size()/2]] > 1 ? 0:1;
    }
};