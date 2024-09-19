class Solution {
public:
    int ans = 0;
    int n,m;
    void check(vector<vector<int>> &dp, int i ,int j){
        int k =dp[i][j];
        int temp = k;
        int up=i-1,down=i+1;
        //아래의 숫자로 같거나 더 큰수가 몇번 나오는지 탐색
        while(down<n){
            if(dp[down++][j]>=k)temp+=k;
            else break;
        }
        //위를 기준으로 같거나 더 큰수가 몇번 나오는지 탐색
        while(up>=0){
            if(dp[up--][j]>=k)temp+=k;
            else break;
        }
        //기존에 찾은 사각형보다 더 큰지 확인
        ans = max(ans,temp);
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        //dp 테이블 생성
        vector<vector<int>> dp(n,vector<int>(m,0));
        // 맨 가로 처음만 matrix값으로 초기화
        for(int i=0; i<n; i++)dp[i][0]= matrix[i][0]-'0';
        // dp 테이블 값 채우기 가로로 가면서 현재가 0이아니면 이전값 더해주기.
        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j]=='0')continue;
                dp[i][j] = dp[i][j-1]+1;
            }
        }
        // dp 테이블 탐색 아마 시간복잡도 n*m 최악을 따져도 n^2*m 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dp[i][j]<1)continue;
                check(dp,i,j);
                //좀 더 범위를 좁히고 싶은데... 
                //높이는 n-i까지 왔는데 m을 곱한것보다 크면 지금 탐색가능한 모든 사각형보다 이미 큰 사각형이 나와있음. 
                if(ans>(n-i)*m)break;
            }
        }
        return ans;
    }
};