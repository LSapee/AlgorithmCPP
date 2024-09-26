class Solution {
public:
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> arr;
        for(int st=1,k =0; arr.size()<rows*cols;){
            for(int i=0; i<2; i++){
                for(int j=0; j<st; j++){
                    if(rStart>=0&&rStart<rows&&cStart>=0&&cStart<cols)arr.push_back({rStart,cStart});
                    rStart+=dx[k];
                    cStart+=dy[k];
                }
                k= (k+1)%4;
            }
            st++;
        }
        return arr;
    }
};