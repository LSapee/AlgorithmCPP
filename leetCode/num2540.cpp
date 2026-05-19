class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int st =0;
        for(int i=0; i<n; i++){
            if(nums1[i] < nums2[st])continue;
            while( st<m &&nums1[i]>nums2[st])st++;
            if(st==m)break;
            if(nums1[i] == nums2[st])return nums1[i];
        }
        return -1;
    }
};