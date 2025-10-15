class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt =0;
        int n = words.size();
        for(int i=0; i<n; i++){
            int temp = s.size() > words[i].size() ? words[i].size() : s.size();
            if(words[i].size()>s.size())continue;
            bool check = false;
            for(int j=0; j<temp; j++){
                if(words[i][j] != s[j]){
                    check = true;
                    break;
                }
            }
            if(!check)cnt++;
        }
        return cnt;
    }
};