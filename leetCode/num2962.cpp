class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();
        int st =0;
        int maxElement = *max_element(nums.begin(),nums.end());
        queue<int> Q;
        int cnt =0;
        for(int i=0; i<n; i++){
            Q.push(nums[i]);
            if(nums[i]==maxElement)cnt++;
            while(!Q.empty()&&cnt==k){
                if(Q.front()==maxElement)cnt--;
                st++;
                Q.pop();
            }
            ans+=st;
        }
        return ans;
    }
};