
// 제미나이가 알려준것.
// 런타임 줄일방법 때문에 런타임이 느린게 int -> long long 원인만 생각하고 물어봤으나 미미한 차이. 오히려 느린거 알려줌 .
class Solution {
public:
    const int MOD = 1e9+7;

    int sumOfBlocks(int n) {
        long long ans = 1;
        long long t = 1;

        for(int i = 2; i <= n; i++) {
            long long st = t + 1;
            t += i;

            long long temp = 1;
            for(long long j = st; j <= t; j++) {
                temp = (temp * j) % MOD;
            }

            ans += temp;
            // % MOD 연산 대신 뺄셈을 사용하여 연산 최적화
            if(ans >= MOD) {
                ans -= MOD;
            }
        }

        return (int)ans;
    }
};


// 내 코드
class Solution {
public:
    const int MOD = 1e9+7;
    int nxt(int st, int ed){
        long long temp = 1;
        while(st<=ed){
            temp *= st;
            temp %= MOD;
            st++;
        }
        return (int)temp%MOD;
    }

    int sumOfBlocks(int n) {
        int ans = 1;
        int t= 1;
        for(int i=2; i<=n; i++){
            t+=i;
            ans = ((ans%MOD) +nxt(t-i+1,t)) % MOD;
        }
        return ans;
    }
};