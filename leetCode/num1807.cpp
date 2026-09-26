class Solution {
public:
    unordered_map<string,string> mp;
    string mappingWord(string &temp) {
        return mp.find(temp) == mp.end() ? "?" : mp[temp];
    }

    string evaluate(string s, vector<vector<string>>& knowledge) {
        int N = knowledge.size();
        for(int i=0; i<N; i++)mp[knowledge[i][0]] = knowledge[i][1];
        string temp = "";
        string ans = "";
        int n = s.size();
        bool checked = false;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                checked =1;
                continue;
            }else if(checked){
                if(s[i]==')'){
                    ans += mappingWord(temp);
                    checked =0;
                    temp = "";
                    continue;
                }
                temp+=s[i];
                continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};