class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans =0;
        if(n<=1)return ans;
        ans = INT_MAX;
        queue<long long> Q;
        Q.push(nums[0]);
        for(int i=1;i<n; i++){
            if(Q.empty()) Q.push(nums[i]);
            else{
                long long F = Q.front();
                if(F*k>=nums[i]){
                    Q.push(nums[i]);
                    continue;
                }
                int Size = Q.size();
                ans = min(n-Size,ans);
                while(!Q.empty() &&nums[i]>Q.front()*k){
                    Q.pop();
                }
                Q.push(nums[i]);
            }
        }
        ans = min(n-(int)Q.size(),ans);
        return ans;
    }
};