class Solution {
public:
    int MOD = 1000000007;
    int concatenatedBinary(int n) {
        int ans = 0;
        for(int i=1; i<=n; i++){
            int Size = (int)log2(i)+1;
            vector<int> arr(Size,0);
            int temp = i;
            int index = Size-1;
            while(temp>0){
                arr[index] = temp%2==0 ? 0 :1;
                temp/=2;
                index--;
            }
            for(int j=0; j<Size; j++)ans = (ans*2+arr[j])%MOD;
        }
        return ans;
    }
};