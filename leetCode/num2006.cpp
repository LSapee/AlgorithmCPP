class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n =nums.size();
        int cnt =0;
        for(int i=0;i<n; i++){
            int a = nums[i];
            for(int j=i+1; j<n; j++){
                int b = nums[j];
                if(abs(max(a,b)-min(a,b)) == k )cnt++;
            }
        }
        return cnt;
    }
};