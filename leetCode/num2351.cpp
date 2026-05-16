class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.size();
        vector<int> arr(26);
        char ans;
        for(int i=0; i<n; i++){
            if(arr[s[i]-'a']!=0)return s[i];
            arr[s[i]-'a']++;
        }
        return ans;
    }
};