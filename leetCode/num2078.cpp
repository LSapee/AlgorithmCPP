class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = -1;
        for(int i=0; i<n; i++){
            if(n-1-i<ans)break;
            for(int j=n-1; j>i; j--){
                if(colors[i] != colors[j]){
                    ans = max(ans, j-i);
                    break;
                }
            }
        }
        return ans;
    }
};