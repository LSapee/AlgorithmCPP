class Solution {
public:
    int N,M;
    void go(vector<vector<int>>& mat,vector<int> &arr,int k,int kk){
        int a = k;
        int aa = kk;
        while(k<N && kk<M){
            arr.push_back(mat[k][kk]);
            k++;
            kk++;
        }
        sort(arr.begin(),arr.end());
        int ed = arr.size()-1;
        k--;
        kk--;
        while(ed>=0){
            mat[k][kk] = arr[ed];
            k--;
            kk--;
            ed--;
        }
    }

    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        N = mat.size();
        M = mat[0].size();
        for(int i= M-2; i>=0; i--){
            vector<int> arr;
            int k = 0;
            int kk = i;
            go(mat,arr,k,kk);
        }
        for(int i=1; i<N; i++){
            vector<int> arr;
            int k = i;
            int kk = 0;
            go(mat,arr,k,kk);
        }
        return mat;
    }
};
