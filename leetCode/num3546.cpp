class Solution {
public:
    int n;
    int m;
    //accumulate(v.begin(), v.end(), 0LL); int형 넘어가면 타입 명시해주기.
    bool checkRows(vector<long long> &rows){
        long long r = 0;
        long long total = accumulate(rows.begin(), rows.end(), 0LL);
        if(total%2 ==1)return false;
        for(int i=0; i<n; i++){
            r+= rows[i];
            if(r*2==total)return true;
            if(r*2>total)return false;
        }
        return false;
    }
    bool checkCols(vector<long long> &cols){
        long long r = 0;
        long long total = accumulate(cols.begin(), cols.end(), 0LL);
        if(total%2 ==1)return false;
        for(int i=0; i<m; i++){
            r+= cols[i];
            if(r*2==total)return true;
            if(r*2>total)return false;
        }
        return false;
    }

    //오답으로 안 사실 그냥 모든 가로선을 자르는 것이아닌 좌우 또는 상하의 합의 비교.
    bool canPartitionGrid(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<long long> rows(n,0);
        vector<long long> cols(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                rows[i] += (long long)grid[i][j];
                cols[j] += (long long)grid[i][j];
            }
        }
        if(n!=1&&checkRows(rows))return true;
        if(m!=1&&checkCols(cols))return true;
        return false;
    }
};