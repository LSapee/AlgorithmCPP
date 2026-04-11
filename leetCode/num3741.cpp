class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        vector<int> arr(n,-1);
        unordered_map<int,int> mp;
        for(int i=n-1; i>=0; i--){
            if(mp.count(nums[i])){
                arr[i] = mp[nums[i]];
            }
            mp[nums[i]] =i;
        }
        for(int i=0; i<n; i++){
            int nxt = arr[i];
            if(nxt!=-1){
                int temp = arr[nxt];
                if(temp !=-1)ans = min(ans,temp-i);
            }
        }
        return ans == INT_MAX ? -1 : ans*2;
    }
};