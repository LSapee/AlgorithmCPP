class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> arr = matrix;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[j][i] = arr[n-(1+i)][j];
            }
        }
    }
};