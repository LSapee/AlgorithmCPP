class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> V(m,vector<int>(n,0));
        int ans =0,r,c;
        for(int i=0;i<indices.size(); i++){
            r= indices[i][0];
            c= indices[i][1];
            for(int j=0; j<V[0].size(); j++)V[r][j]++;
            for(int j=0; j<V.size(); j++)V[j][c]++;
        }
        for(int i=0; i<V.size(); i++){
            for(int j=0; j<V[0].size(); j++)if(V[i][j]%2!=0)ans++;
        }
        return ans;
    }
};