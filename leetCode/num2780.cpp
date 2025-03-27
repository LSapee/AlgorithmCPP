class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n =nums.size();
        int mx = 0;
        int mxNum = 0;
        int ans =-1;
        for(auto a : nums){
            mp[a]++;
            if(mp[a]>mx){
                mxNum = a;
                mx = mp[a];
            }
        }
        int mxCnt =nums[0] == mxNum ? 1 : 0;
        for(int i=1; i<n; i++){
            // k는 남은 지배적 요소의 개수
            int k = mx-mxCnt;
            if(mxCnt>i/2){
                if(k>(n-i)/2){
                    ans=i;
                    break;
                }
            }
            if(nums[i]==mxNum) mxCnt++;
        }
        return ans ==-1 ? -1 :ans-1;

    }
};