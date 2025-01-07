class Solution {
public:
    string matching(string s, string ss){
        for(int i=0; i<s.size(); i++){
            bool ok= false;
            if(s[i]==ss[0]){
                if(i+ss.size()>s.size())return "";
                for(int j=0; j<ss.size(); j++){
                    if(s[i+j]!=ss[j]){
                        ok = true;
                        break;
                    }
                }
                if(ok)continue;
                return ss;
            }else{
                continue;
            }
        }
        return "";
    }

    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        int n =words.size();
        vector<bool> vis(n,false);
        for(int i=0; i<n; i++){
            if(vis[i])continue;
            string temp;
            for(int j=0; j<n; j++){
                if(vis[j]||i==j)continue;
                if(words[i].size()>words[j].size()){
                    temp = matching(words[i],words[j]);
                    if(temp.size()!=0){
                        ans.push_back(temp);
                        temp = "";
                        vis[j]=true;
                    }
                }else continue;
            }
        }
        return ans;
    }
};