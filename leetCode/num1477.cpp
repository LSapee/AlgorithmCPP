class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n = arr.size();
        mp[0] = -1;
        int ans = n+1;
        int s =0;
        int mn = n;
        for(int i=0; i<n; i++){
            s+=arr[i];
            if(mp.count(s-target)){
                int j = mp[s-target];
                int l = i-j;
                ans = min(ans,l+(j==-1?n:arr[j]));
                mn = min(mn,l);
            }
            arr[i] = mn;
            mp[s] =i;
        }
        return ans ==n+1 ? -1 :ans;
    }
};