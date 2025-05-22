class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n =nums.size();
        int m =queries.size();
        vector<int> arr(n+1, 0);
        //시작점은 1 끝난 뒤부터는 -1
        for(const auto &cur:queries){
            int st = cur[0];
            int ed = cur[1]+1;
            arr[st] += 1;
            arr[ed] -= 1;
        }
        int curr =0;
        for(int i=0; i<n;i++){
            curr+=arr[i];
            int curt=nums[i]-curr;
            if(curt>0)return false;
        }
        return true;
    }
};