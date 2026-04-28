class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans =0;
        for(int a : nums)mp[a]++;
        for(auto a : mp) if(a.second % k == 0) ans += a.first*a.second;
        return ans;
    }
};