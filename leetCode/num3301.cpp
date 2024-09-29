class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(), maximumHeight.end());
        int n = maximumHeight.size();
        if(maximumHeight[n-1]<n)return -1;
        long long ans =maximumHeight[n-1];
        for(int i=n-2; i>=0; i--){
            while(maximumHeight[i]>=maximumHeight[i+1]) maximumHeight[i]=maximumHeight[i+1]-1;
            if(maximumHeight[i]<=0)return -1;
            ans+=maximumHeight[i];
        }
        return ans;
    }
};