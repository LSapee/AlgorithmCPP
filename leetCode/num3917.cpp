class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int o=0;
        int t=0;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i=n-1; i>=0; i--){
            if(nums[i]%2==0){
                ans[i]= t;
                o++;
            }else{
                ans[i]=o;
                t++;
            }
        }
        return ans;
    }
};