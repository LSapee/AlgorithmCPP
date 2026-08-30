class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = -1;
        int maxIndex = -1;
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==mn)minIndex =i;
            if(nums[i]==mx)maxIndex =i;
        }
        return min({min(maxIndex,minIndex)+1+(n-max(maxIndex,minIndex)),
        max(maxIndex,minIndex)+1,
        n-min(maxIndex,minIndex)});
    }
};