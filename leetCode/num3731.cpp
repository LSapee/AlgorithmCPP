class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int st = nums[0];
        int n =nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==st)st++;
            else{
                while(nums[i]!=st){
                    ans.push_back(st);
                    st++;
                }
                st++;
            }
        }
        return ans;
    }
};