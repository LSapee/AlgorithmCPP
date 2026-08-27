class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp, mp2;
        for(int a: nums) mp[a]++;
        for(int a: nums){
            mp2[a]++;
            mp[a]--;
            if(mp[a]==0)mp.erase(a);
            ans.push_back(mp2.size()-mp.size());
        }
        return ans;
    }
};