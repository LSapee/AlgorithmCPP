class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1,str2;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                if(!str1.empty())str1.pop_back();
                continue;
            }
            else str1.push_back(s[i]);
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]=='#'){
                if(!str2.empty())str2.pop_back();
                continue;
            }
            else str2.push_back(t[i]);
        }
        cout<<str1<<"\n";
        cout<<str2;
        if(str1.size()==str2.size()){
            for(int i=0; i<str1.size(); i++){
                if(str1[i]!=str2[i]) return false;
            }
            return true;
        }
        return false;
    }
};