class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> mp;
        int n= nums2.size();
        for(int i=0;i<n; i++){
            int k =nums2[i];
            int v =-1;
            for(int j=i+1; j<n; j++){
                if(nums2[j]>nums2[i]){
                    v= nums2[j];
                    break;
                }
            }
            mp[k]=v;
        }
        for(int i=0; i<nums1.size(); i++)ans.push_back(mp[nums1[i]]);
        return ans;
    }
};