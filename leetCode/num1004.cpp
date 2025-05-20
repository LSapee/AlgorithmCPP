class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        deque<int> DQ;
        int n =nums.size();
        int cnt =0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(nums[i]==0)cnt++;
            DQ.push_back(nums[i]);
            while(cnt>k){
                if(DQ.front()==0)cnt--;
                DQ.pop_front();
            }
            ans = ans >= DQ.size() ? ans :DQ.size();
        }
        return ans;
    }
};