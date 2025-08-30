class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<nums[i].size(); j++){
                mp[nums[i][j]]++;
            }
        }
        for(auto a : mp) if(a.second ==n)ans.push_back(a.first);
        sort(ans.begin(),ans.end());
        return ans;
    }
};