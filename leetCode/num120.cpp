class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = triangle.size();
        int m = triangle[n-1].size();
        int arr[n+1][m+1];
        fill(arr[0],arr[n+1],0);
        arr[0][0] =triangle[0][0];
        for(int i=1; i<n; i++){
            for(int j=0; j<triangle[i].size(); j++){
                if(j==0) arr[i][j] = arr[i-1][j]+triangle[i][j];
                else if(j==triangle[i].size()-1) arr[i][j] = arr[i-1][j-1] + triangle[i][j];
                else arr[i][j] = min(arr[i-1][j]+triangle[i][j],arr[i-1][j-1]+triangle[i][j]);
            }
        }
        int ans =INT_MAX;
        for(int i=0; i<m; i++){
            ans = min(arr[n-1][i],ans);
        }
        return ans;
    }
};