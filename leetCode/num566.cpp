class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0));
        if(mat.size()==0||r*c!=mat.size()*mat[0].size())return mat;
        queue<int> Q;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                Q.push(mat[i][j]);
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(!Q.empty()){
                    ans[i][j] = Q.front();Q.pop();
                }
            }
        }
        return ans;
    }
};