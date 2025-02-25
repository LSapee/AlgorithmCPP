class Solution {
public:
    int MOD = 1e+9 +7;
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        // 배열값을 변경을 위한 복사
        for(auto& num : arr)num%=2;
        //합이 짝수인 배열 , 합이 홀수인 배열
        vector<int> dpEven(n),dpOdd(n);
        if(arr[n-1]==0){
            dpEven[n-1]=1;
        }else{
            dpOdd[n-1]=1;
        }

        for(int num=n-2; num>=0; num--){
            if(arr[num]==1){
                //현재 수가 홀수인경우 이전까지 짝수의 배열수 +1를 홀수로 넣어줌 
                dpOdd[num]= (1+dpEven[num+1])%MOD;
                dpEven[num] = dpOdd[num+1];
            }else{
                dpEven[num] = (1+dpEven[num+1])%MOD;
                dpOdd[num] = dpOdd[num+1];
            }
        }
        int cnt=0;
        for(auto oddCnt :dpOdd)cnt = (cnt+oddCnt)%MOD;
        return cnt;
    }
};