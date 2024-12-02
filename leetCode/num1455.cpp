class Solution {
public:
    bool check(string &s,string &searchWord){
        if(s.size()<searchWord.size())return false;
        for(int i=0; i<searchWord.size(); i++)if(s[i]!=searchWord[i])return false;
        return true;
    }

    int isPrefixOfWord(string sentence, string searchWord) {
        int ans=-1;
        string s= "";
        int cnt =0;
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]==' '){
                cnt++;
                if(check(s,searchWord)){
                    ans=cnt;
                    s= "";
                    break;
                }
                s= "";
                continue;
            }
            s +=sentence[i];
        }
        if(s.size()>0){
            cnt++;
            if(check(s,searchWord))ans=cnt;
        }
        return ans;
    }
};