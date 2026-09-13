class Solution {
public:
    // 점점 우측에서 좌측으로 갈수록 점점 줄어드는 수열을 만들어야하는데.
    long long maximumBooks(vector<int>& books) {
        int n = books.size();
        vector<long long> dp(n);
        stack<int> stk; // books가 int라
        long long ans = 0;
        for(int i=0; i<n; i++){
            // 아래 보고 오기
            while(!stk.empty() && books[stk.top()] - stk.top() >= books[i]-i) stk.pop();

            int j = stk.empty() ? -1 : stk.top();

            // i 부터 왼쪽으로 몇 개의 선반에서 책을 가져올 수 있는지 계산.
            // j번째 선반까지 닿기 전에 책의 개수가 0의 가능성 때문에 min처리
            /**
            삼각형으로 가로 & 세로를 비교해서 길이가 작은변을 cnt로 처리
            **/
            long long cnt = min(i-j,books[i]);

            // 삼각형 같음.
            // 등차수열의 합 : (첫 항 + 마지막 항) * 개수 /2
            // 마지막 항은 books[i], 개수는 cnt 첫항은 books[i]-cnt+1
            long long sum = (1LL*2*books[i]-cnt+1) *cnt/2;

            dp[i] = sum;

            // 만약 0에 도달전에 j를 만났다면, j에서 최대값을 그대로 더해주기.
            if(j!=-1 && i-j<=books[i])dp[i]+=dp[j];
            ans = max(ans,dp[i]);
            stk.push(i);
        }
        return ans;
    }
};
