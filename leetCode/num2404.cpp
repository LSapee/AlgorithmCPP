class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans = 0;
        int cnt =0;
        int n =nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)if(nums[i]%2==0)mp[nums[i]]++;
        if(mp.size()==0)return -1;
        for(auto a: mp) {
            if(a.second>=cnt){
                if(a.second ==cnt){
                    ans = min(ans,a.first);
                    continue;
                }
                cnt = a.second;
                ans = a.first;
            }
        }
        return ans;
    }
};