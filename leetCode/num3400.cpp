class Solution {
public:
    int maximumMatchingIndices(vector<int>& nums1, vector<int>& nums2) {
        int ans =0;
        int n = nums1.size();
        int st =0;
        for(int i=0; i<n; i++){
            int cnt =0; 
            for(int j=0; j<n; j++){
                if(nums1[(i+j)%n] == nums2[j])cnt++;
            }
            ans = max(cnt,ans);
            if(ans == n) break;
        }
        return ans;
    }
};