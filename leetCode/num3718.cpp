class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> arr(101,0);
        int n = nums.size();
        for(int i=0; i<n; i++)arr[nums[i]]++;
        int i=1;
        while(k*i<=100){
            if(arr[k*i]==0)return k*i;
            i++;
        }
        return k*i;
    }
};