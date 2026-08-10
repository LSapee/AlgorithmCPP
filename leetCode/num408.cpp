class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int st = 0;
        int ed = abbr.size();
        int p = 0;
        string num = "";
        while(st<ed){
            if(abbr[st] >='0' && abbr[st]<='9'){
                num+= abbr[st];
            }else{
                if(num.size() == 0){
                    if(abbr[st] != word[p])return false;
                    p++;
                }else{
                    if(num[0]=='0')return false;
                    p+= stoi(num);
                    num ="";
                    if(p>=word.size())return false;
                    if(abbr[st]!=word[p])return false;
                    p++;
                }
            }
            st++;
        }
        if(num.size() != 0) {
            if(num[0]=='0')return false;
            p+= stoi(num);
        }
        return p == word.size() ? 1:0;
    }
};
