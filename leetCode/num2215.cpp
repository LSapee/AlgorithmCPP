class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        int n =nums1.size();
        int m = nums2.size();
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(auto a : nums1)st1.insert(a);
        for(auto a : nums2)st2.insert(a);
        for(auto a : st1){
            bool temp = false;
            for(int i=0; i<m; i++){
                if(a==nums2[i]){
                    temp = true;
                    break;
                }
            }
            if(!temp)ans[0].push_back(a);
        }
        for(auto a : st2){
            bool temp = false;
            for(int i=0; i<n; i++){
                if(a==nums1[i]){
                    temp = true;
                    break;
                }
            }
            if(!temp)ans[1].push_back(a);
        }
        return ans;
    }
};