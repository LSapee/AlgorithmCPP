class Solution {
public:
    string makeLower(string s){
        for(int i=0; i<s.size(); i++) if(s[i]<=90)s[i]+=32;
        return s;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string s ="";
        map<string,int> mp;
        for(int i=0; i<paragraph.size(); i++){
            if(paragraph[i]==' '|| paragraph[i]=='!'|| paragraph[i]=='?'|| paragraph[i]=='\''|| paragraph[i]==','|| paragraph[i]==';'|| paragraph[i]=='.'){
                if(s.size()==0)continue;
                s = makeLower(s);
                mp[s]++;
                s ="";
                continue;
            }
            s+=paragraph[i];
        }
        if(s.size()!=0) {
            s =  makeLower(s);
            mp[s]++;
        }
        for(int i=0;i<banned.size(); i++)mp[banned[i]]=0;
        string ans ="";
        int mx =-1;
        for(auto a : mp){
            if(a.second>mx){
                mx =a.second;
                ans = a.first;
            }
        }
        return ans;
    }
};