class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int st= 0;
        for(int i=0; i<str1.size(); i++){
            char k = str1[i]+1;
            if(k>'z')k='a';
            if(str1[i]==str2[st]||k==str2[st]){
                st++;
                if(st==str2.size())break;
            }
        }
        if(st==str2.size())return true;
        return false;
    }
};