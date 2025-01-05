class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool ok = true;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            int x = i;
            int y= 0;
            int target = matrix[x][y];
            while(x<n&&y<m){
                if(matrix[x][y]!=target)ok = false;
                x++;
                y++;
            }
        }
        for(int i=0; i<m; i++){
            int x = 0;
            int y = i;
            int target = matrix[x][y];
            while(x<n&&y<m){
                if(matrix[x][y]!=target)ok = false;
                x++;
                y++;
            }
        }
        return ok;
    }
};