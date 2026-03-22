class Solution {
public:
    int n,m;
    void rote(vector<vector<int>>& mat, vector<vector<int>>& rote90){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                rote90[i][j] = mat[n-1-j][i];
            }
        }
    }
    bool cando(vector<vector<int>>& cur, vector<vector<int>>& target){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(cur[i][j]!=target[i][j])return false;
            }
        }
        return true;
    }


    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        n=mat.size();
        m=mat[0].size();
        vector<vector<int>> rote90(n,vector<int>(m,0));
        vector<vector<int>> rote180(n,vector<int>(m,0));
        vector<vector<int>> rote270(n,vector<int>(m,0));
        rote(mat,rote90);
        rote(rote90,rote180);
        rote(rote180,rote270);
        bool check = cando(mat,target);
        if(check)return true;
        check = cando(rote90,target);
        if(check)return true;
        check = cando(rote180,target);
        if(check)return true;
        check = cando(rote270,target);
        return check;
    }
};