class Solution {
public:
    vector<int> primeNums;
    bool temp[1000001];
    void findPrimeNums(int ed){
        temp[1]=true;
        for(int i=2; i*i<=ed; i++){
            if(temp[i])continue;
            for(int j=2; j*i<=ed; j++){
                temp[i*j]=true;
            }
        }
        for(int i=2; i<=ed; i++)if(!temp[i])primeNums.push_back(i);
    }

    vector<int> closestPrimes(int left, int right) {
        findPrimeNums(right);
        vector<int> ans(2,-1);
        int k = INT_MAX;
        if(left==right)return ans;
        for(int i=0; i<primeNums.size()-1; i++){
            if(primeNums[i]>=left && primeNums[i+1]<=right){
                if(k>primeNums[i+1]-primeNums[i]){
                    k = primeNums[i+1]-primeNums[i];
                    ans[0] = primeNums[i];
                    ans[1] = primeNums[i+1];
                }
            }else if(primeNums[i]>right)break;
        }
        return ans;
    }
};
// Queue사용시 메모리 사용량 감소