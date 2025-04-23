class Solution {
public:
    int countLargestGroup(int n) {
        int ans =0;
        int ansLen = 0;
        vector<int> arr(37);
        for(int i=1; i<=n; i++){
            int sum =0;
            int k =i;
            while(k>=10){
                sum+=k%10;
                k/=10;
            }
            sum+=k%10;
            arr[sum]++;
            ansLen = max(ansLen,arr[sum]);
        }
        for(int i=1; i<37; i++)if(arr[i]==ansLen)ans++;
        return ans;
    }
};