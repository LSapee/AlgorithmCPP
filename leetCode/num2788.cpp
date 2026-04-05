class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        string s = "";
        int n =words.size();
        for(int i=0; i<n; i++){
            int m = words[i].size();
            s="";
            for(int j=0; j<m; j++){
                if(s.size()==0 && words[i][j]==separator)continue;
                if(words[i][j] == separator){
                    ans.push_back(s);
                    s="";
                }else{
                    s+=words[i][j];
                }
            }
            if(s.size()!=0) ans.push_back(s);
            
        }
        return ans;
    }
};