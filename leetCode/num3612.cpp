class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(char a: s){
            if(a >='a' && a<='z')ans+=a;
            else{
                if(ans.size()==0)continue;
                if(a == '#')ans += ans;
                else if(a =='*')ans.pop_back();
                else if(a=='%')reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};