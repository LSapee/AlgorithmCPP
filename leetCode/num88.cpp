class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        for(int i=0; i<m; i++)temp.push_back(nums1[i]);
        for(int i=0; i<n; i++)temp.push_back(nums2[i]);
        sort(temp.begin(),temp.end());
        nums1 =temp;
    }
};