class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n = points.size();
        int ans = 0;
        for(int i=1; i<n; i++) ans = max(ans,points[i][0]-points[i-1][0]);
        return ans;
    }
};