class Solution {
public:
    vector<bool> ap;
    bool check(string a){
        for(char c : a) if(!ap[c-'a'])return false;
        return true;
    }

    int countConsistentStrings(string allowed, vector<string>& words) {
        ap.assign(26,false);
        int n = allowed.size();
        int wl = words.size();
        int ans =0;
        for(int i=0; i<n; i++)ap[allowed[i]-'a'] = true;
        for(int i=0; i<wl; i++) if(check(words[i]))ans++;
        return ans;
    }
};