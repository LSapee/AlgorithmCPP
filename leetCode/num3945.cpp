class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> arr(10,0);
        while(n>0){
            arr[n%10]++;
            n/=10;
        }
        int ans =0;
        for(int i=1;i<10; i++)ans+=arr[i]*i;
        return ans;
    }
};