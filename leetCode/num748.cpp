class Solution {
public:
    int ok(unordered_map<char,int> mp,string &s){
        int n =s.size();
        for(int i=0; i<n; i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
            }
        }
        return mp.size() == 0 ? s.size() :0;
    }

    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> mp;
        int n = licensePlate.size();
        for(int i=0; i<n; i++){
            if(licensePlate[i] >='A' && licensePlate[i]<='Z') mp[licensePlate[i]+32]++;
            else if(licensePlate[i]>='a' &&licensePlate[i]<='z')mp[licensePlate[i]]++;
        }
        string ans = "";
        int m = words.size();
        for(int i=0; i<m; i++){
            int len = ok(mp,words[i]);
            if(len==0)continue;
            if(ans.size() == 0 && len > 0)ans = words[i];
            else if(ans.size()>len) ans = words[i];
        }
        return ans;
    }
};