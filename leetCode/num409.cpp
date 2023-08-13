class Solution {
public:
    int arr[128];
    int longestPalindrome(string s) {
        for(char a : s){
            arr[a]++;
        }
        int ans = 0;
        for(int i=0; i<128; i++){
            ans += arr[i]/2*2;
            // 같은글자가 1개일때 중앙에 문자길이가 짝수면 중앙에 넣기 위해서 해줘야함
            if(ans%2 ==0 && arr[i]%2==1) ans++;
        }
        return ans;

    }
};