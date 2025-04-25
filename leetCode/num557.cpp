class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string ss ="";
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ')ss+=s[i];
            else{
                if(ss.size()==0)continue;
                reverse(ss.begin(),ss.end());
                ans.push_back(ss);
                ss="";
            }
        }
        if(ss.size()!=0){
            reverse(ss.begin(),ss.end());
            ans.push_back(ss);
        }
        string ansStr = "";
        for(int i=0; i<ans.size(); i++){
            if(i==ans.size()-1) ansStr += ans[i];
            else ansStr += ans[i]+" ";
        }
        return ansStr;
    }
};