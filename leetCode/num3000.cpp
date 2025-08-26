class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double k =0.0;
        int n =dimensions.size();
        int ans =0;
        for(int i=0; i<n; i++){
            int a = (dimensions[i][0]*dimensions[i][0]) + (dimensions[i][1]*dimensions[i][1]);
            double t = sqrt(a);
            if(t>k){
                k=t;
                ans =dimensions[i][0]*dimensions[i][1];
            }else if(t==k){
                if(ans<dimensions[i][0]*dimensions[i][1]){
                    ans = dimensions[i][0]*dimensions[i][1];
                    k=t;
                }
            }
        }
        return ans;
    }
};