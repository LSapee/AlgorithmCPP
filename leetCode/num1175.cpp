class Solution {
public:
    const int MOD = 1e9+7;
    vector<bool> prime;
    void primeNums(){
        prime.resize(101,0);
        prime[0]=1;
        prime[1]=1;
        for(int i=2; i*i<=100; i++){
            if(prime[i])continue;
            for(int j=2; j*i<=100; j++){
                prime[i*j]=1;
            }
        }
    }

    int numPrimeArrangements(int n) {
        primeNums();
        if(n<3)return 1;
        long long ans =1;
        int A =1;
        for(int i=3; i<=n; i++) if(!prime[i])A++;
        for(int i=1; i<=A; i++) ans=(ans*i)%MOD;
        for(int i=1; i<=n-A; i++) ans=(ans*i)%MOD;
        return (int)ans;
    }
};


