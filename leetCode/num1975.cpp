class Solution {
public:
    // 한번 -1을 곱할때 무조껀 2칸씩!
    // -1을 원하는만큼 곱할수 있으니 0이 있으면 0쪽으로 유도 하면 언제나 모든수를 양수로 만들 수 있음
    // 음수의 갯수가 짝수이면 계속 -1을 인접한 칸과 곱해서 길찾기 느낌으로 만나게 해서 둘다 양수로 변환가능
    // 음수의 갯수가 홀수인경우 무조껀 1칸이 음수가 되어야 하기에 절대값이 가장 작은수를 음수로 만들어주기.
    long long ans = 0;
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int min = 9999999;
        int n = matrix.size();
        int cnt = 0;
        bool haveZero = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0) haveZero = true;
                if(matrix[i][j]<0)cnt++;
                int temp = abs(matrix[i][j]);
                ans+=temp;
                min = min>=temp ? temp : min;
            }
        }
        if(haveZero) return ans;
        if(cnt%2==0) return ans;
        return ans - (2*min);
    }
};