class Solution {
public:
    string ans(string a){
        string s ="";
        for(int i=0; i<a.size(); i++){
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')continue;
            s+=a[i];
        }
        return s;
    }
    string removeVowels(string s) {
        return ans(s);
    }
};