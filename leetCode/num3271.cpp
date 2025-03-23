class Solution {
public:
    string sArr[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"} ;
    string stringHash(string s, int k) {
        int n = s.size();
        string ss ="";
        for(int i=0; i<n; i+=k){
            int m = s[i]-'a';
            int ed = i+1;
            while(ed<i+k) m+=s[ed++]-'a';
            m %= 26;
            ss += sArr[m];
        }
        return ss;
    }
};