class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n =nums.size();
        vector<int> arr(101,0);
        int MAX =0;
        int ans =0;
        for(int i=0; i<n; i++){
            arr[nums[i]]++;
            MAX =max(MAX,arr[nums[i]]);
        }
        for(int i=1; i<=100; i++)if(arr[i]==MAX)ans+=MAX;
        return ans;
    }
};