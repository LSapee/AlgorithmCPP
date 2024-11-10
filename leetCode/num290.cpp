class Solution {
public:
    bool check[26];
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string ss ="";
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                arr.push_back(ss);
                ss = "";
                continue;
            }
            ss +=s[i];
        }
        arr.push_back(ss);
        if(arr.size()!=pattern.size())return false;
        map<string,char> mp;
        for(int i=0; i<pattern.size(); i++){
            if(mp.find(arr[i])==mp.end()){
                if(check[pattern[i]-'a']) return false;
                mp[arr[i]]= pattern[i];
                check[pattern[i]-'a']=true;
            }
            if(mp[arr[i]]!=pattern[i]) return false;
        }
        return true;
    }
};