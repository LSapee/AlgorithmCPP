class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        int sum =0; int Mod = 1e9+7;
        for(int i=left-1; i<right; i++)sum = (sum+arr[i])%Mod;
        return sum;
    }
};