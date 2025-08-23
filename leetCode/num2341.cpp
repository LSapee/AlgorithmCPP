class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n =nums.size();
        int cnt =0;
        vector<int> ans;
        for(int i=0; i<n; i++){
            int k = nums[i];
            if(k==-1)continue;
            for(int j =i+1; j<n; j++){
                if(nums[j]==nums[i]){
                    nums[j]=-1;
                    cnt++;
                    break;
                }
            }
        }
        ans.push_back(cnt);
        ans.push_back(n-(cnt*2));
        return ans;
    }
};