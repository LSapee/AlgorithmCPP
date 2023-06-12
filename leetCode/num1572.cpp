class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int st =0;
        int ed = mat.size()-1;
        int sum =0;
        while(st<=ed){
            sum += mat[st][st];
            mat[st][st]=0;
            st++;
        }
        st =0;
        while(0<=ed){
            sum+=mat[st][ed];
            ed--;
            st++;
        }
        return sum;
    }
};