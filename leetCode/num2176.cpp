class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n =nums.size();
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){
                    if((i*j)%k==0)ans++;
                }
            }
        }
        return ans;
    }
};