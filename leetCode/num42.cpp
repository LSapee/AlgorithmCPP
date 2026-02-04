class Solution {
public:
    int trap(vector<int>& height) {
        int ans =0;
        int n = height.size();
        vector<int> lw(n,0),rw(n,0);
        lw[0]= 0;
        rw[n-1]= 0;
        for(int i=1; i<n; i++)lw[i] = max(height[i-1],lw[i-1]);
        for(int i=n-2; i>0; i--) rw[i] = max(height[i+1],rw[i+1]);
        for(int i=1; i<n-1; i++){
            if(0>min(lw[i],rw[i])-height[i])continue;
            ans+= min(lw[i],rw[i])-height[i];
        }
        return ans;
    }
};