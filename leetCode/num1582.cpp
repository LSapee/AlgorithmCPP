class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_set<int> x;
        unordered_set<int> y;
        int ans =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                if(mat[i][j]==1){
                    if(x.find(i)!=x.end() ||y.find(j)!=y.end()){
                        x.insert(i);
                        y.insert(j);
                        continue;
                    }
                    x.insert(i);
                    y.insert(j);
                    int nxtI =i+1;
                    int nxtJ =j+1;
                    bool ok = false;
                    while(nxtI<n){
                        if(mat[nxtI][j]==1){
                            ok =true;
                            break;
                        }
                        nxtI++;
                    }
                    if(ok)continue;
                    while(nxtJ<m){
                        if(mat[i][nxtJ]==1){
                            ok =true;
                            break;
                        }
                        nxtJ++;
                    }
                    if(!ok)ans++;
                }
            }
        }
        return ans;
    }
};
