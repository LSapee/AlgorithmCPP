class Solution {
public:
    vector<int> arr;
    int n2 =0;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0.0;
        vector<int> arr;
        if(nums1.size()>=nums2.size()){
            for(int i=0; i<nums1.size(); i++){
                if(n2>=nums2.size()){
                    arr.push_back(nums1[i]);
                    continue;
                }
                if(nums2[n2]<=nums1[i]){
                    arr.push_back(nums2[n2]);
                    n2++;
                    i--;
                }else{
                    arr.push_back(nums1[i]);
                }
            }
            for(int i=n2; i<nums2.size(); i++)arr.push_back(nums2[i]);
        }else{
            for(int i =0; i<nums2.size(); i++){
                if(n2>=nums1.size()){
                    arr.push_back(nums2[i]);
                    continue;
                }
                if(nums1[n2]<=nums2[i]){
                    arr.push_back(nums1[n2]);
                    n2++;
                    i--;
                }else{
                    arr.push_back(nums2[i]);
                }
            }
            for(int i=n2; i<nums1.size(); i++)arr.push_back(nums1[i]);
        }
        ans = arr[arr.size()/2];
        if(arr.size()%2==0){
            ans+= arr[arr.size()/2-1];
            ans/=2.0;
        }
        return ans;
    }
};