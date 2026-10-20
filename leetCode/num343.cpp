class Solution {
public:
    int ans = 0;
    vector<int> primeNums;

    void makePrimeNums(int n){
        vector<bool> p(n+1);
        p[1]= true;

        for(int i=2; i*i<=n; i++){
            for(int j=2; j*i<=n; j++){
                p[i*j] =true;
            }
        }
        for(int i=2; i<=n; i++)if(!p[i])primeNums.push_back(i);
    }

    void back(int n, int x,int index){
        if(n<=1){
            ans = max(ans,x);
            return;
        }
        for(int i=index; i<primeNums.size(); i++){
            if(n-primeNums[i]>=0) back(n-primeNums[i],x*primeNums[i],i);
            else return ;
        }
    }

    int integerBreak(int n) {
        if(n<= 3) return n-1;
        makePrimeNums(n);
        back(n,1,0);
        return ans;
    }
};