class Solution {
public:
    vector<bool> primeNums;
    void isPrime(){
        primeNums.assign(33,false);
        primeNums[0] =true;
        primeNums[1] = true;
        for(int i=2; i*i<=32; i++){
            if(primeNums[i])continue;
            for(int j=2; i*j<=32; j++){
                primeNums[i*j]=true;
            }
        }
    }
    bool makeBitsCnt(int k){
        int cnt =0;
        while(k>0){
            if(k%2!=0)cnt++;
            k/=2;
        }
        return !primeNums[cnt];
    }

    int countPrimeSetBits(int left, int right) {
        isPrime();
        int cnt= 0;
        for(int i=left; i<=right; i++){
            if(makeBitsCnt(i))cnt++;
        }
        return cnt;
    }
};