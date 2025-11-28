class Solution {
public:
    bool check(char st){
        if(st=='a' || st=='e' ||st=='i'||st=='o'||st=='u')return true;
        return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int ans =0;
        for(int i=left; i<=right; i++){
            bool ok = false;
            if(words[i][0] == 'a'||words[i][0] == 'e'||words[i][0] == 'i'||words[i][0] == 'o'||words[i][0] == 'u') ok = check(words[i][words[i].size()-1]);
            if(ok)ans++;
        }
        return ans;
    }
};