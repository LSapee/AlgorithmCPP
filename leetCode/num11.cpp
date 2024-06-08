class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int st = 0;
        int ed = height.size()-1;
        while(st<ed){
            int w = ed-st;
            ans = max(ans,min(height[st],height[ed])*w);
            if(height[st]<=height[ed]){
                st++;
            }else{
                ed--;
            }
        }
        return ans;
    }
};