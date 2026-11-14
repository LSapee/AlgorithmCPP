class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int cnt = 1;
            if(cnt>=l && cnt<=r ){
                if(temp<ans&& temp>0) ans = temp;
            }
            if(cnt==r)continue;
            for(int j =i+1; j<n; j++){
                cnt++;
                temp+=nums[j];
                if(cnt>=l && cnt<=r ){
                    if(temp<ans && temp>0) ans = temp;
                }
                if(cnt==r)break;
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};