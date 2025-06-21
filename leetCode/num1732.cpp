class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans =-9999999;
        int n= gain.size();
        int k =0;
        for(int i=0; i<n;i++){
            k += gain[i];
            ans = max(ans,k);
        }
        return ans <= 0? 0 : ans;
    }
};
