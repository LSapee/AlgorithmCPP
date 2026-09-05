class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int a :nums)mp[a]++;
        for(auto p : mp)if(p.second ==1) ans.push_back(p.first);
        return ans;
    }
};