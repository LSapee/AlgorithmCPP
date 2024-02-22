class Solution {
public:
    int arr[2001];
    int largestUniqueNumber(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans =-1;
        for(int num:nums)arr[num]++;
        for(int num:nums){
            if(arr[num]==1) ans= max(ans,num);
        }
        return ans;
    }
};