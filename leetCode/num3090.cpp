class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0;
        int cnt = 0;
        int n = s.size();
        int index = -1;
        vector<int> arr(26,0);
        int st =0;
        for(int i =0; i<n; i++){
            arr[s[i]-'a']++;
            while(arr[s[i]-'a']>2 && st<i){
                arr[s[st]-'a']--;
                st++;
            }
            ans = max(ans,i-st+1);
        }
        return ans;
    }
};