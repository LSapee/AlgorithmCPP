class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        unordered_set<int> st;
        int n = nums1.size();
        int m = nums2.size();
        int o = nums3.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j])st.insert(nums1[i]);
                for(int k=0; k<o; k++){
                    if(nums1[i] == nums3[k])st.insert(nums1[i]);
                    if(nums2[j] == nums3[k])st.insert(nums2[j]);
                }
            }
        }
        for(auto a : st) ans.push_back(a);
        return ans;
    }
};