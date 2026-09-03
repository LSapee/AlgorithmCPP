class Solution {
public:
    bool t(vector<int>& nums1){
        int n = nums1.size();
        bool f = false;
        for(int i=0; i<n; i++){
            if(nums1[i]%2==1) return false; 
        }
        return true;
    }
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        if(nums1[0]%2==1)return true;
        return t(nums1);
    }
};