class Solution {
public:
    bool checkB(int a, int b, vector<vector<int>>& matrix){
        for(int i=0; i<matrix.size(); i++){
            if(i==a)continue;
            if(matrix[i][b]>matrix[a][b])return false;
        }
        return true;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<int> ans;
        for(int i=0; i<matrix.size(); i++){
            int a = -1;
            int k =INT_MAX;
            for(int j=0; j<matrix[i].size(); j++){
                if(k>matrix[i][j]){
                    k=matrix[i][j];
                    a = j;
                }
            }
            bool ok = checkB(i,a,matrix);
            if(ok)ans.push_back(matrix[i][a]);
        }
        return ans;
    }
};