class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int l =0;
        int n =nums.size();
        int ans =0;
        for(int i=0; i<n-1; i++){
            int r= 0;
            l+=nums[i];
            for(int j=i+1; j<n; j++){
                r+=nums[j];
            }
            if((l-r) %2==0)ans++;
        }
        return ans;
    }
};