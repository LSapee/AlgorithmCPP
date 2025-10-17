class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n =nums1.size();
        int m =nums2.size();
        int ans = stoi(to_string(min(nums1[0],nums2[0])) +to_string(max(nums1[0],nums2[0])));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j])return nums1[i];
            }
        }
        return ans;
    }
};