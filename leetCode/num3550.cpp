class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = 9999;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int temp = 0;
            int k = nums[i];
            while(k>0){
                temp += k%10;
                k/=10;
            }
            if(temp==i) ans = min(ans,temp);
        }
        return ans == 9999 ? -1 : ans;
    }
};