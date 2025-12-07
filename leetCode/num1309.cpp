class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string ss = "";
        for(int i=0; i<n; i++){
            if(s[i]=='#')continue;
            if(i+2>=n){
                ss+= s[i]-'1'+'a';
                continue;
            }
            if(s[i+2]=='#'){
                ss += 'a'+stoi(s.substr(i,2))-1;
                i+=2;
            }else{
                ss+= s[i]-'1'+'a';
            }
        }
        return ss;
    }
};