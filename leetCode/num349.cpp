class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    bool k =false;
                    for(int m = 0; m<ans.size(); m++){
                        if(ans[m]==nums1[i]){
                            k= true;
                            break;
                        }
                    }
                    if(!k) ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};