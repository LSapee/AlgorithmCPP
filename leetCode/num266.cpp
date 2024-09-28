class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> arr(26,0);
        for(int i=0; i<s.size(); i++){
            arr[s[i]-'a']++;
        }
        int cnt = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0)continue;
            if(arr[i]%2==1)cnt++;
        }
        if(cnt>=2)return false;
        return true;
    }
};