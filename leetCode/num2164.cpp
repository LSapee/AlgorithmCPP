class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(i%2!=0)arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }
        sort(arr1.rbegin(),arr1.rend());
        sort(arr2.begin(),arr2.end());
        int arrS =0;
        int arrE =0;
        for(int i=0; i<n; i++){
            if(i%2!=0)nums[i] = arr1[arrS++];
            else nums[i] = arr2[arrE++];
        }
        return nums;
    }
};