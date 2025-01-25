class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n = nums1.size();
        for(int i=0; i<n; i++){
            mp[nums2[i]]=i;
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};


