class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans =0;
        for(int i=0; i<words.size(); i++){
            bool ok = true;
            if(words[i][0]==pref[0]){
                for(int j=0; j<pref.size(); j++){
                    if(words[i][j]!=pref[j]){
                        ok= false; break;
                    }
                }
                if(ok)ans++;
            }else continue;
        }
        return ans;
    }
};