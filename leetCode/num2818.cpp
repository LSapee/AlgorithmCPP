class Solution {
public:
// 아직 잘 이해 안가는 문제. 다시 한 번 어떤지 살펴볼 문제.
    int MOD = 1e9+7;

    long long p(long long base, long long ex){
        long long res =1;
        while(ex>0){
            if(ex%2==1){
                res = ((res*base)%MOD);
            }
            base = (base*base)%MOD;
            ex/=2;
        }
        return res;
    }
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sc(n);
        for(int i=0; i<n; i++){
            int kk = nums[i];
            for(int j= 2; j*j<=kk; j++){
                if(kk%j==0){
                    sc[i]++;
                    while(kk%j==0)kk/=j;
                }
            }
            if(kk>=2)sc[i]++;
        }
        vector<int> nx(n,n);
        vector<int> arr(n,-1);
        stack<int> PrimeStk;
        for(int i=0; i<n; i++){
            while(!PrimeStk.empty() && sc[PrimeStk.top()]<sc[i]){
                int cur =PrimeStk.top();PrimeStk.pop();
                nx[cur] = i;
            }
            if(!PrimeStk.empty()){
                arr[i] = PrimeStk.top();
            }
            PrimeStk.push(i);
        }
        vector<long long> subArr(n);
        for(int i=0; i<n; i++){
            subArr[i] = (long long)(nx[i]-i)*(i-arr[i]);
        }
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<n; i++) pq.push({nums[i],i});
        long long score = 1;
        while(k>0){
            auto cur= pq.top(); pq.pop();
            long long op = min((long long)k,subArr[cur.second]);
            score =(score * p(cur.first,op))%MOD;
            k-=op;
        }
        return score;
    }
};