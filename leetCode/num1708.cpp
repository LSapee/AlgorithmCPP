class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        auto mx = max_element(nums.begin(),nums.end()-k+1);
        return {mx,mx+k};
    }
};