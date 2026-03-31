class Solution {
public:
    int countOddLetters(int n) {
        vector<string> arr = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        vector<int> cnt(26,0);
        while(n>0){
            int temp = n%10;
            n/=10;
            int m = arr[temp].size();
            for(int i=0; i<m; i++){
                cnt[arr[temp][i]-'a']++;
            }
        }
        int ans =0;
        for(int i=0; i<26; i++)if(cnt[i]%2==1)ans++;
        return ans;
         
    }
};