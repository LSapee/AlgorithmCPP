class Solution {
public:
    int n;
    int m;
    bool by(vector<vector<int>>& matrix, int target,int i){
        int st = 0;
        int ed = m;
        while(st<=ed){
            int mid = (st+ed)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(matrix[i][mid]<target){
                st = mid+1;
            }else{
                ed = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix[0][0]==target)return true;
        n = matrix.size();
        m = matrix[0].size();
        for(int i=0; i<n; i++){
            if(target>matrix[i][m-1])continue;
            if(target<matrix[i][0])break;
            bool ok = by(matrix,target,i);
            if(ok)return true;
        }
        return false;
    }
};