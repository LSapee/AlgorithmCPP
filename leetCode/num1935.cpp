class Solution {
public:
    int ans =0;
    set<char> st;
    void check(string s){
        int n =s.size();
        for(int i=0; i<n; i++){
            if(st.find(s[i])!=st.end()){
                return ;
            }
        }
        ans++;
        return ;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        int n =text.size();
        for(int i=0; i<brokenLetters.size(); i++)st.insert(brokenLetters[i]);
        string temp ="";
        for(int i=0; i<n; i++){
            if(text[i]==' '){
                check(temp);
                temp="";
            }else{
                temp+=text[i];
            }
        }
        if(temp.size()!=0)check(temp);
        return ans;
    }
};