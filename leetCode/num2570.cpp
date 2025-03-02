class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<nums1.size(); i++)mp[nums1[i][0]]=nums1[i][1];
        for(int i=0; i<nums2.size(); i++)mp[nums2[i][0]]+=nums2[i][1];
        for(auto a : mp)ans.push_back({a.first,a.second});
        sort(ans.begin(),ans.end());
        return ans;
    }
};