class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i=0; i<n; i++){
            int k = index[i];
            if(ans[k]==-1)ans[k]= nums[i];
            else{
                int ed = k+1;
                while(ans[ed]!=-1)ed++;
                while(ed>k){
                    ans[ed] = ans[ed-1];
                    ed--;
                }
                ans[k] = nums[i];
            }
        }
        return ans;
    }
};