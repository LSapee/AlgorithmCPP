class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int> nums(100001,0);
        int n =arr.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            nums[arr[i]]++;
            int k = n/4;
            if(n%4!=0)k++;
            if(nums[arr[i]]>= k)ans = arr[i];
        }
        return ans;
    }
};